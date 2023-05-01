/**
 * @file scanner.l
 * @author Mustafa Hatipoğlu
 * @brief Rules for scanner
 * @version 0.1
 * @date 2023-05-01
 * 
 * @copyright Copyright (c) 2023
 * 
 */
%{
  #include "scanner_token.h"
%}

LETTER  [a-zA-Z]
DIGIT  [0-9]

%%
"if"        { return TOKEN_IF; }
"else"      { return TOKEN_ELSE; }

"while"     { return TOKEN_WHILE; }
"for"       { return TOKEN_FOR; }
"in"        { return TOKEN_IN; }

"def"       { return TOKEN_DEF; }
"return"    { return TOKEN_RETURN; }

"and"       { return TOKEN_AND; }
"or"        { return TOKEN_OR; }
"not"       { return TOKEN_NOT; }

"+"         { return TOKEN_PLUS; }
"-"         { return TOKEN_MINUS; }
"*"         { return TOKEN_MULTIPLY; }
"/"         { return TOKEN_DIVISION; }
"%"         { return TOKEN_MODULUS; }

"=="        { return TOKEN_EQUALS; }
"!="        { return TOKEN_NOT_EQUALS; }
">="        { return TOKEN_GREATER_THAN_OR_EQUALS; }
"<="        { return TOKEN_LESS_THAN_OR_EQUALS; }
">"         { return TOKEN_GREATER_THAN; }
"<"         { return TOKEN_LESS_THAN; }

"("         { return TOKEN_L_PAREN; }
")"         { return TOKEN_R_PAREN; }
"["         { return TOKEN_L_BRACKET; }
"]"         { return TOKEN_R_BRACKET; }
"{"         { return TOKEN_L_BRACE; }
"}"         { return TOKEN_R_BRACE; }
","         { return TOKEN_COMMA; }
":"         { return TOKEN_COLON; }
"."         { return TOKEN_DOT; }
"="         { return TOKEN_ASSIGNMENT; }

{DIGIT}+                                  { return TOKEN_INTEGER; }
{DIGIT}*\.{DIGIT}+                        { return TOKEN_FLOAT; }
(\'{3}[^\']*\'{3}|\"{3}[^\"]*\"{3})       { return TOKEN_MULTI_LINE_STRING; }
(\"[^\"\n]*\"|\'[^\'\n]*\')               { return TOKEN_SINGLE_LINE_STRING; }
(True|False)                              { return TOKEN_BOOL; }
"None"                                    { return TOKEN_NONE; }

^#[^\n]*$                                 { return TOKEN_COMMENT; }

[a-zA-z][a-zA-Z0-9_]*                     { return TOKEN_IDENTIFIER; }

" "         { return TOKEN_SPACE; }
"\t"        { return TOKEN_TAB; }
"\r"        { return TOKEN_CARRIAGE_RETURN; }
"\n"        { return TOKEN_NEWLINE; }
.           { return TOKEN_INVALID; }

%%

int yywrap() { return 1; }