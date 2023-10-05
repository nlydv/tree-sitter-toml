const WS = repeat(choice(" ", "\t"));

module.exports = grammar({
    name: "toml",

    inline: $ => [ $._wschar, $._newline, $._commentStartSymbol, $._wsCommentNewline ],

    rules: {
        // ;; Overall Structure
        //
        // toml = expression *( newline expression )
        //
        // expression =  ws [ comment ]
        // expression =/ ws keyval ws [ comment ]
        // expression =/ ws table ws [ comment ]
        document: $ => seq(
            seq(
                optional(seq(
                    WS,
                    choice($.keyval, $.table)
                )),
                WS,
                optional($.comment)
            ),
            repeat(seq(
                $._newline,
                seq(
                    optional(seq(
                        WS,
                        choice($.keyval, $.table)
                    )),
                    WS,
                    optional($.comment)
                )
            ))
        ),

        // ;; Whitespace
        //
        // ws = *wschar
        // wschar =  %x20  ; Space
        // wschar =/ %x09  ; Horizontal tab
        // _ws: $ => repeat($._wschar),
        _wschar: $ => choice(" ", "\t"),

        // ;; Newline
        //
        // newline =  %x0A     ; LF
        // newline =/ %x0D.0A  ; CRLF
        _newline: $ => choice("\n", "\r\n"),

        // ;; Comment
        //
        // comment-start-symbol = %x23 ; #
        // non-ascii = %x80-D7FF / %xE000-10FFFF
        // non-eol = %x09 / %x20-7F / non-ascii
        // _commentStartSymbol: $ => "#",
        _nonAscii: $ => /[\x00-\x7f]/,
        _nonEol: $ => choice("\t", /[\x20-\x7f]/, $._nonAscii),

        // comment = comment-start-symbol *non-eol
        comment: $ => seq("#", repeat($._nonEol)),

        // ;; Key-Value pairs
        //
        // keyval = key keyval-sep val
        keyval: $ => seq($.key, $.keyvalSep, $.val),

        // key = simple-key / dotted-key
        // simple-key = quoted-key / unquoted-key
        key: $ => choice($.simpleKey, $.dottedKey),
        simpleKey: $ => choice($.quotedKey, $.unquotedKey),

        // unquoted-key = 1*( ALPHA / DIGIT / %x2D / %x5F ) ; A-Z / a-z / 0-9 / - / _
        // quoted-key = basic-string / literal-string
        // dotted-key = simple-key 1*( dot-sep simple-key )
        unquotedKey: $ => /[A-Za-z0-9-_]+/,
        quotedKey: $ => choice($.basicString, $.literalString),
        dottedKey: $ => prec.right(1, seq(
            $.simpleKey,
            repeat1(seq($.dotSep, $.simpleKey))
        )),

        // dot-sep   = ws %x2E ws  ; . Period
        // keyval-sep = ws %x3D ws ; =
        dotSep: $ => seq(WS, ".", WS),
        keyvalSep: $ => seq(WS, "=", WS),

        // val = string / boolean / array / inline-table / date-time / float / integer
        val: $ => choice(
            $.string,
            $.boolean,
            $.array,
            $.inlineTable,
            $.dateTime,
            $.float,
            $.integer
        ),

        // ;; String
        //
        // string = ml-basic-string / basic-string / ml-literal-string / literal-string
        string: $ => choice(
            $.mlBasicString,
            $.basicString,
            $.mlLiteralString,
            $.literalString
        ),

        // ;; Basic String
        //
        // basic-string = quotation-mark *basic-char quotation-mark
        basicString: $ => seq(
            $.quotationMark,
            repeat($.basicChar),
            $.quotationMark
        ),

        // quotation-mark = %x22            ; "
        quotationMark: $ => '"',

        // basic-char = basic-unescaped / escaped
        // basic-unescaped = wschar / %x21 / %x23-5B / %x5D-7E / non-ascii
        // escaped = escape escape-seq-char
        basicChar: $ => choice($.basicUnescaped, $.escaped),
        basicUnescaped: $ => choice(
            $._wschar,
            "!",
            /[\x23-\x5b]/,
            /[\x5d-\x7e]/,
            $._nonAscii
        ),
        escaped: $ => seq($.escape, $.escapeSeqChar),

        // escape = %x5C                   ; \
        // escape-seq-char =  %x22         ; "    quotation mark  U+0022
        // escape-seq-char =/ %x5C         ; \    reverse solidus U+005C
        // escape-seq-char =/ %x62         ; b    backspace       U+0008
        // escape-seq-char =/ %x66         ; f    form feed       U+000C
        // escape-seq-char =/ %x6E         ; n    line feed       U+000A
        // escape-seq-char =/ %x72         ; r    carriage return U+000D
        // escape-seq-char =/ %x74         ; t    tab             U+0009
        // escape-seq-char =/ %x75 4HEXDIG ; uXXXX                U+XXXX
        // escape-seq-char =/ %x55 8HEXDIG ; UXXXXXXXX            U+XXXXXXXX
        escape: $ => "\x5c",
        escapeSeqChar: $ => choice(
            "\x22",
            "\x5c",
            "\x62",
            "\x66",
            "\x6e",
            "\x72",
            "\x74",
            /u[0-9a-fA-F]{4}/,
            /U[0-9a-fA-F]{8}/
        ),

        // ;; Multiline Basic String
        //
        // ml-basic-string = ml-basic-string-delim [ newline ] ml-basic-body
        //                   ml-basic-string-delim
        // ml-basic-string-delim = 3quotation-mark
        // ml-basic-body = *mlb-content *( mlb-quotes 1*mlb-content ) [ mlb-quotes ]
        mlBasicString: $ => seq(
            '"""', // $._mlBasicStringDelim,
            optional($._newline),
            seq(
                repeat($._mlbContent),
                repeat(seq($._mlbQuotes, repeat1($._mlbContent))),
                optional($._mlbQuotes)
            ),
            '"""' // $._mlBasicStringDelim
        ),
        // _mlBasicStringDelim: $ => '"""',
        // _mlBasicBody: $ => seq(
        //     repeat($._mlbContent),
        //     repeat(seq($._mlbQuotes, repeat1($._mlbContent))),
        //     optional($._mlbQuotes)
        // ),

        // mlb-content = mlb-char / newline / mlb-escaped-nl
        // mlb-char = mlb-unescaped / escaped
        // mlb-quotes = 1*2quotation-mark
        // mlb-unescaped = wschar / %x21 / %x23-5B / %x5D-7E / non-ascii
        // mlb-escaped-nl = escape ws newline *( wschar / newline )
        _mlbContent: $ => prec.left(6, choice(
            $._mlbChar,
            $._newline,
            seq(
                $.escape,
                WS,
                $._newline,
                repeat(choice($._wschar, $._newline))
            )
        )),
        _mlbChar: $ => choice($._mlbUnescaped, $.escaped),
        _mlbQuotes: $ => seq('"', optional('"')),
        _mlbUnescaped: $ => $.basicUnescaped, // duplicate ABNF definition
        // _mlbEscapedNl: $ => seq(
        //     $.escape,
        //     WS,
        //     $._newline,
        //     repeat(choice($._wschar, $._newline))
        // ),

        // ;; Literal String
        //
        // literal-string = apostrophe *literal-char apostrophe
        literalString: $ => seq("'", repeat($.literalChar), "'"),

        // apostrophe = %x27 ; ' apostrophe
        // apostrophe: $ => "'",

        // literal-char = %x09 / %x20-26 / %x28-7E / non-ascii
        literalChar: $ => choice(
            "\x09",
            /[\x20-\x26]/,
            /[\x28-\x7e]/,
            $._nonAscii
        ),

        // ;; Multiline Literal String
        //
        // ml-literal-string = ml-literal-string-delim [ newline ] ml-literal-body
        //                     ml-literal-string-delim
        // ml-literal-string-delim = 3apostrophe
        // ml-literal-body = *mll-content *( mll-quotes 1*mll-content ) [ mll-quotes ]
        mlLiteralString: $ => seq(
            "'''", //$.mlLiteralStringDelim,
            optional($._newline),
            seq(
                repeat($._mllContent),
                repeat(seq(
                    $._mllQuotes,
                    repeat1($._mllContent),
                )),
                optional($._mllQuotes)
            ),
            "'''" // $.mlLiteralStringDelim
        ),
        // mlLiteralStringDelim: $ => "'''",
        // mlLiteralBody: $ => seq(
        //     repeat($._mllContent),
        //     repeat(seq(
        //         $._mllQuotes,
        //         repeat1($._mllContent),
        //     )),
        //     optional($._mllQuotes)
        // ),

        // mll-content = mll-char / newline
        // mll-char = %x09 / %x20-26 / %x28-7E / non-ascii
        // mll-quotes = 1*2apostrophe
        _mllContent: $ => prec(7, choice($._mllChar, $._newline)),
        _mllChar: $ => $.literalChar, // another exact duplicate
        _mllQuotes: $ => seq("'", optional("'")),

        // ;; Integer
        //
        // integer = dec-int / hex-int / oct-int / bin-int
        integer: $ => choice(
            $.decInt,
            $.hexInt,
            $.octInt,
            $.binInt
        ),

        // minus = %x2D                       ; -
        // plus = %x2B                        ; +
        // underscore = %x5F                  ; _
        // digit1-9 = %x31-39                 ; 1-9
        // digit0-7 = %x30-37                 ; 0-7
        // digit0-1 = %x30-31                 ; 0-1
        minus: $ => "-",
        plus: $ => "+",
        underscore: $ => "_",
        digit1_9: $ => /[1-9]/,
        digit0_7: $ => /[0-7]/,
        digit0_1: $ => /0|1/,

        // hex-prefix = %x30.78               ; 0x
        // oct-prefix = %x30.6F               ; 0o
        // bin-prefix = %x30.62               ; 0b
        hexPrefix: $ => "0x",
        octPrefix: $ => "0o",
        binPrefix: $ => "0b",

        // dec-int = [ minus / plus ] unsigned-dec-int
        // unsigned-dec-int = DIGIT / digit1-9 1*( DIGIT / underscore DIGIT )
        decInt: $ => seq(
            optional(choice($.minus, $.plus)),
            $.unsignedDecInt
        ),
        unsignedDecInt: $ => choice(
            $.DIGIT,
            seq(
                $.digit1_9,
                repeat1(choice(
                    $.DIGIT,
                    seq($.underscore, $.DIGIT)
                ))
            )
        ),

        // hex-int = hex-prefix HEXDIG *( HEXDIG / underscore HEXDIG )
        // oct-int = oct-prefix digit0-7 *( digit0-7 / underscore digit0-7 )
        // bin-int = bin-prefix digit0-1 *( digit0-1 / underscore digit0-1 )
        hexInt: $ => seq(
            $.hexPrefix,
            $.HEXDIG,
            repeat(choice(
                $.HEXDIG,
                seq($.underscore, $.HEXDIG))
            )
        ),
        octInt: $ => seq(
            $.octPrefix,
            $.digit0_7,
            repeat(choice(
                $.digit0_7,
                seq($.underscore, $.digit0_7)
            ))
        ),
        binInt: $ => seq(
            $.binPrefix,
            $.digit0_1,
            repeat(choice(
                $.digit0_1,
                seq($.underscore, $.digit0_1)
            ))
        ),

        // ;; Float
        //
        // float = float-int-part ( exp / frac [ exp ] )
        // float =/ special-float
        float: $ => choice(
            seq(
                $.floatIntPart,
                choice(
                    $.exp,
                    seq($.frac, optional($.exp))
                )
            ),
            $.specialFloat
        ),

        // float-int-part = dec-int
        // frac = decimal-point zero-prefixable-int
        // decimal-point = %x2E               ; .
        // zero-prefixable-int = DIGIT *( DIGIT / underscore DIGIT )
        floatIntPart: $ => $.decInt,
        frac: $ => seq($.decimalPoint, $.zeroPrefixableInt),
        decimalPoint: $ => ".",
        zeroPrefixableInt: $ => seq(
            $.DIGIT,
            repeat(choice(
                $.DIGIT,
                seq($.underscore, $.DIGIT))
            )
        ),

        // exp = "e" float-exp-part
        // float-exp-part = [ minus / plus ] zero-prefixable-int
        exp: $ => seq("e", $.floatExpPart),
        floatExpPart: $ => seq(
            optional(choice($.minus, $.plus)),
            $.zeroPrefixableInt
        ),

        // special-float = [ minus / plus ] ( inf / nan )
        // inf = %x69.6e.66  ; inf
        // nan = %x6e.61.6e  ; nan
        specialFloat: $ => seq(
            optional(choice($.minus, $.plus)),
            choice($.inf, $.nan)
        ),
        inf: $ => "inf",
        nan: $ => "nan",

        // ;; Boolean
        //
        // boolean = true / false
        boolean: $ => choice("true", "false"), // true/false defs only used here

        // true    = %x74.72.75.65     ; true
        // false   = %x66.61.6C.73.65  ; false

        // ;; Date and Time (as defined in RFC 3339)
        //
        // date-time      = offset-date-time / local-date-time / local-date / local-time
        dateTime: $ => choice(
            $.offsetDateTime,
            $.localDateTime,
            $.localDate,
            $.localTime
        ),

        // date-fullyear  = 4DIGIT
        // date-month     = 2DIGIT  ; 01-12
        // date-mday      = 2DIGIT  ; 01-28, 01-29, 01-30, 01-31 based on month/year
        // time-delim     = "T" / %x20 ; T, t, or space
        // time-hour      = 2DIGIT  ; 00-23
        // time-minute    = 2DIGIT  ; 00-59
        // time-second    = 2DIGIT  ; 00-58, 00-59, 00-60 based on leap second rules
        // time-secfrac   = "." 1*DIGIT
        // time-numoffset = ( "+" / "-" ) time-hour ":" time-minute
        // time-offset    = "Z" / time-numoffset
        dateFullYear: $ => /\d{4}/,
        dateMonth: $ => choice(/0[1-9]/, /1[0-2]/),
        dateMDay: $ => choice(/0[1-9]/, /[1-2][0-9]/, /3[0-1]/),
        timeDelim: $ => choice("T", "t", " "),
        timeHour: $ => choice(/[0-1][0-9]/, /2[0-3]/),
        timeMinute: $ => /[0-5][0-9]/,
        timeSecond: $ => choice(/[0-5][0-9]/, "60"),
        timeSecFrac: $ => /\.\d+/,
        timeNumOffset: $ => seq(
            choice($.minus, $.plus),
            $.timeHour,
            ":",
            $.timeMinute
        ),
        timeOffset: $ => choice("Z", $.timeNumOffset),

        // partial-time   = time-hour ":" time-minute ":" time-second [ time-secfrac ]
        // full-date      = date-fullyear "-" date-month "-" date-mday
        // full-time      = partial-time time-offset
        partialTime: $ => seq(
            $.timeHour,
            ":",
            $.timeMinute,
            ":",
            $.timeSecond,
            optional($.timeSecFrac)
        ),
        fullDate: $ => seq(
            $.dateFullYear,
            "-",
            $.dateMonth,
            "-",
            $.dateMDay
        ),
        fullTime: $ => seq(
            $.partialTime,
            $.timeOffset
        ),

        // ;; Offset Date-Time
        //
        // offset-date-time = full-date time-delim full-time
        offsetDateTime: $ => prec(5, seq($.fullDate, $.timeDelim, $.fullTime)),

        // ;; Local Date-Time
        //
        // local-date-time = full-date time-delim partial-time
        localDateTime: $ => prec(4, seq($.fullDate, $.timeDelim, $.partialTime)),

        // ;; Local Date
        //
        // local-date = full-date
        localDate: $ => prec(3, $.fullDate),

        // ;; Local Time
        //
        // local-time = partial-time
        localTime: $ => prec(2, $.partialTime),

        // ;; Array
        //
        // array = array-open [ array-values ] ws-comment-newline array-close
        //
        // array-open =  %x5B ; [
        // array-close = %x5D ; ]
        array: $ => seq(
            "[",
            optional($.arrayValues),
            repeat(choice(
                $._wschar,
                seq(optional($.comment), $._newline)
            )),
            "]"
        ),

        // array-values =  ws-comment-newline val ws-comment-newline array-sep array-values
        // array-values =/ ws-comment-newline val ws-comment-newline [ array-sep ]
        //
        // array-sep = %x2C  ; , Comma
        arrayValues: $ => prec.left(8, seq(
            repeat(choice(
                $._wschar,
                seq(optional($.comment), $._newline)
            )),
            $.val,
            repeat(choice(
                $._wschar,
                seq(optional($.comment), $._newline)
            )),
            optional(choice(
                seq(",", $.arrayValues),
                ","
            )),
        )),

        // ws-comment-newline = *( wschar / [ comment ] newline )
        // _wsCommentNewline: $ => repeat(choice(
        //     $._wschar,
        //     seq(optional($.comment), $._newline)
        // )),

        // ;; Table
        //
        // table = std-table / array-table
        table: $ => choice($.stdTable, $.arrayTable),

        // ;; Standard Table
        //
        // std-table = std-table-open key std-table-close
        stdTable: $ => seq($.stdTableOpen, $.key, $.stdTableClose),

        // std-table-open  = %x5B ws     ; [ Left square bracket
        // std-table-close = ws %x5D     ; ] Right square bracket
        stdTableOpen: $ => seq("[", WS),
        stdTableClose: $ => seq(WS, "]"),

        // ;; Inline Table
        //
        // inline-table = inline-table-open [ inline-table-keyvals ] inline-table-close
        //
        // inline-table-open  = %x7B ws     ; {
        // inline-table-close = ws %x7D     ; }
        // inline-table-sep   = ws %x2C ws  ; , Comma
        //
        // inline-table-keyvals = keyval [ inline-table-sep inline-table-keyvals ]
        inlineTable: $ => prec(9, seq(
            seq("{", WS),
            optional($.inlineTableKeyvals),
            seq(WS, "}")
        )),
        inlineTableKeyvals: $ => prec.left(8, seq(
            $.keyval,
            optional(seq(seq(WS, ",", WS), $.inlineTableKeyvals))
        )),

        // ;; Array Table
        //
        // array-table = array-table-open key array-table-close
        arrayTable: $ => seq($.arrayTableOpen, $.key, $.arrayTableClose),

        // array-table-open  = %x5B.5B ws  ; [[ Double left square bracket
        // array-table-close = ws %x5D.5D  ; ]] Double right square bracket
        arrayTableOpen: $ => seq("[[", WS),
        arrayTableClose: $ => seq(WS, "]]"),

        // ;; Built-in ABNF terms, reproduced here for clarity
        //
        // ALPHA = %x41-5A / %x61-7A ; A-Z / a-z
        // DIGIT = %x30-39 ; 0-9
        // HEXDIG = DIGIT / "A" / "B" / "C" / "D" / "E" / "F"
        ALPHA: $ => /[A-Za-z]/,
        DIGIT: $ => /[0-9]/,
        HEXDIG: $ => /[0-9A-Fa-f]/
    }
});
