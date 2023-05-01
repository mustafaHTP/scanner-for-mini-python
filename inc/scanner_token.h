/**
 * @file scanner_tokens.h
 * @author Mustafa Hatipoğlu
 * @brief Token types for scanner
 * @version 0.1
 * @date 2023-05-01
 * 
 * @copyright Copyright (c) 2023
 * 
 */

typedef enum {
    TOKEN_EOF = 0,
    /* CONDITIONS */
    TOKEN_IF,
    TOKEN_ELSE,
    /* LOOPS */
    TOKEN_WHILE,
    TOKEN_FOR,
    TOKEN_IN,
    /* FUNCTIONS */
    TOKEN_DEF,
    TOKEN_RETURN,
    /* LOGICAL OPERATORS */
    TOKEN_AND,
    TOKEN_OR,
    TOKEN_NOT,
    /* ARITHMETIC OPERATORS */
    TOKEN_PLUS,
    TOKEN_MINUS,
    TOKEN_MULTIPLY,
    TOKEN_DIVISION,
    TOKEN_MODULUS,
    /* RELATIONAL OPERATORS */
    TOKEN_EQUALS,
    TOKEN_NOT_EQUALS,
    TOKEN_GREATER_THAN_OR_EQUALS,
    TOKEN_LESS_THAN_OR_EQUALS,
    TOKEN_GREATER_THAN,
    TOKEN_LESS_THAN,
    /* OTHERS */
    TOKEN_L_PAREN,
    TOKEN_R_PAREN,
    TOKEN_L_BRACKET,
    TOKEN_R_BRACKET,
    TOKEN_L_BRACE,
    TOKEN_R_BRACE,
    TOKEN_COMMA,
    TOKEN_COLON,
    TOKEN_DOT,
    TOKEN_ASSIGNMENT,
    /* TYPES */
    TOKEN_INTEGER,
    TOKEN_FLOAT,
    TOKEN_SINGLE_LINE_STRING,
    TOKEN_MULTI_LINE_STRING,
    TOKEN_BOOL,
    TOKEN_NONE,
    /* COMMENT */
    TOKEN_COMMENT,
    /* IDENTIFIER */
    TOKEN_IDENTIFIER,
    /* WHITESPACE CHARACTERS */
    TOKEN_SPACE,
    TOKEN_TAB,
    TOKEN_CARRIAGE_RETURN,
    TOKEN_NEWLINE,
    /* ERROR */
    TOKEN_INVALID
} token_t;