/**
 * @file scanner_main.c
 * @author Mustafa Hatipoğlu
 * @brief some parts taken from https://www3.nd.edu/~dthain/compilerbook/chapter3.pdf
 * @version 0.1
 * @date 2023-05-01
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include "scanner_token.h"
#include <stdio.h>
extern int yylex();
extern char *yytext;

char* token_to_string(token_t token){
    switch(token){
        case TOKEN_EOF:
            return "TOKEN_EOF";
        case TOKEN_IF:
            return "TOKEN_IF";
        case TOKEN_ELSE:
            return "TOKEN_ELSE";
        case TOKEN_WHILE:
            return "TOKEN_WHILE";
        case TOKEN_FOR:
            return "TOKEN_FOR";
        case TOKEN_IN:
            return "TOKEN_IN";
        case TOKEN_DEF:
            return "TOKEN_DEF";
        case TOKEN_RETURN:
            return "TOKEN_RETURN";
        case TOKEN_AND:
            return "TOKEN_AND";
        case TOKEN_OR:
            return "TOKEN_OR";
        case TOKEN_NOT:
            return "TOKEN_NOT";
        case TOKEN_PLUS:
            return "TOKEN_PLUS";
        case TOKEN_MINUS:
            return "TOKEN_MINUS";
        case TOKEN_MULTIPLY:
            return "TOKEN_MULTIPLY";
        case TOKEN_DIVISION:
            return "TOKEN_DIVISION";
        case TOKEN_MODULUS:
            return "TOKEN_MODULUS";
        case TOKEN_EQUALS:
            return "TOKEN_EQUALS";
        case TOKEN_NOT_EQUALS:
            return "TOKEN_NOT_EQUALS";
        case TOKEN_GREATER_THAN_OR_EQUALS:
            return "TOKEN_GREATER_THAN_OR_EQUALS";
        case TOKEN_LESS_THAN_OR_EQUALS:
            return "TOKEN_LESS_THAN_OR_EQUALS";
        case TOKEN_GREATER_THAN:
            return "TOKEN_GREATER_THAN";
        case TOKEN_LESS_THAN:
            return "TOKEN_LESS_THAN";
        case TOKEN_L_PAREN:
            return "TOKEN_L_PAREN";
        case TOKEN_R_PAREN:
            return "TOKEN_R_PAREN";
        case TOKEN_L_BRACKET:
            return "TOKEN_L_BRACKET";
        case TOKEN_R_BRACKET:
            return "TOKEN_R_BRACKET";
        case TOKEN_L_BRACE:
            return "TOKEN_L_BRACE";
        case TOKEN_R_BRACE:
            return "TOKEN_R_BRACE";
        case TOKEN_COMMA:
            return "TOKEN_COMMA";
        case TOKEN_COLON:
            return "TOKEN_COLON";
        case TOKEN_DOT:
            return "TOKEN_DOT";
        case TOKEN_ASSIGNMENT:
            return "TOKEN_ASSIGNMENT";
        case TOKEN_INTEGER:
            return "TOKEN_INTEGER";
        case TOKEN_FLOAT:
            return "TOKEN_FLOAT";
        case TOKEN_MULTI_LINE_STRING:
            return "TOKEN_MULTI_LINE_STRING";
        case TOKEN_SINGLE_LINE_STRING:
            return "TOKEN_SINGLE_LINE_STRING";
        case TOKEN_BOOL:
            return "TOKEN_BOOL";
        case TOKEN_NONE:
            return "TOKEN_NONE";
        case TOKEN_COMMENT:
            return "TOKEN_COMMENT";
        case TOKEN_IDENTIFIER:
            return "TOKEN_IDENTIFIER";
        case TOKEN_SPACE:
            return "TOKEN_SPACE";
        case TOKEN_TAB:
            return "TOKEN_TAB";
        case TOKEN_CARRIAGE_RETURN:
            return "TOKEN_CARRIAGE_RETURN";
        case TOKEN_NEWLINE:
            return "TOKEN_NEWLINE";
        case TOKEN_INVALID:
            return "TOKEN_INVALID";
    }
}

int main()
{
    while (1){
        token_t t = yylex();
        if (t == TOKEN_EOF)
            break;
        printf("token number: %d, token type: %s, text: %s\n", t, token_to_string(t), yytext);
    }
}