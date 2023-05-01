CURR_DIR := .
DIR_SRC := ./src
DIR_INC := ./inc

scanner: ${DIR_SRC}/scanner.l ${DIR_SRC}/scanner_main.c
	flex ${DIR_SRC}/scanner.l
	gcc lex.yy.c ${DIR_SRC}/scanner_main.c -ll -o scanner -I./inc
	rm lex.yy.c