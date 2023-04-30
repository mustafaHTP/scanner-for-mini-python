LETTER  [a-zA-Z]
DIGIT  [0-9]
%%

"if"        { printf("IF\n"); }
"else"      { printf("ELSE\n"); }
"while"     { printf("WHILE\n"); }
"for"       { printf("FOR\n"); }
"def"       { printf("DEF\n"); }
"return"    { printf("RETURN\n"); }
"and"       { printf("AND\n"); }
"or"        { printf("OR\n"); }
"not"       { printf("NOT\n"); }
"True"      { printf("TRUE\n"); }
"False"     { printf("FALSE\n"); }
"None"      { printf("NONE\n"); }

"+"         { printf("PLUS\n"); }
"-"         { printf("MINUS\n"); }
"*"         { printf("MULTIPLY\n"); }
"/"         { printf("DIVIDE\n"); }
"%"         { printf("MODULUS\n"); }
"=="        { printf("EQUALS\n"); }
"!="        { printf("NOT_EQUALS\n"); }
">="        { printf("GREATER_THAN_OR_EQUALS\n"); }
"<="        { printf("LESS_THAN_OR_EQUALS\n"); }
">"         { printf("GREATER_THAN\n"); }
"<"         { printf("LESS_THAN\n"); }

"("         { printf("LPAREN\n"); }
")"         { printf("RPAREN\n"); }
"["         { printf("LBRACKET\n"); }
"]"         { printf("RBRACKET\n"); }
"{"         { printf("LBRACE\n"); }
"}"         { printf("RBRACE\n"); }
","         { printf("COMMA\n"); }
":"         { printf("COLON\n"); }
";"         { printf("SEMICOLON\n"); }
"."         { printf("DOT\n"); }
"="         { printf("ASSIGNMENT\n"); }

{DIGIT}+               { printf("INTEGER\n"); }
{DIGIT}*\.{DIGIT}+    { printf("FLOAT\n"); }
^("[^\']+"|'[^\"]+')$   { printf("STRING\n"); }
^#[^\n]*$               { printf("SINGLE LINE COMMENT\n"); }
'{3}[^']*'{3}           { printf("MULTI LINE COMMENT\n"); }
[a-zA-z][a-zA-Z0-9_]*             { printf("IDENTIFIER\n"); }

[ \t\r]+        { /* ignore whitespace */ }
\n              { /* ignore newlines */ }
.               { printf("INVALID\n"); }

%%

int main(int argc, char* argv[]) {
  yylex();
  return 0;
}