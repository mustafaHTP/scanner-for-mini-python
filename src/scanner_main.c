/*
https://www3.nd.edu/~dthain/compilerbook/chapter3.pdf
*/
#include "scanner_token.h"
#include <stdio.h>
extern int yylex();
extern char *yytext;
int main()
{
    while (1){
        token_t t = yylex();
        if (t == TOKEN_EOF)
            break;
        printf("token: %d text: %s\n", t, yytext);
    }
}