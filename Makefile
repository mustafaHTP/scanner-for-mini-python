CURR_DIR := .
DIR_SRC := ./src
DIR_INC := ./inc

scanner: ${DIR_SRC}/scanner.l ${DIR_SRC}/scanner_main.c ${DIR_INC}/scanner_token.h
	flex ${DIR_SRC}/scanner.l
	gcc lex.yy.c ${DIR_SRC}/scanner_main.c -ll -o scanner -I./inc
	rm lex.yy.c

clean: 
	rm ./scanner 
	rm test/output*.txt
test: ./scanner
	./scanner < test/test1.py > test/output1.txt
	./scanner < test/test2.py > test/output2.txt
