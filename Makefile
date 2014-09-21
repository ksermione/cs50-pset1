all: greedy

greedy: greedy.c
	clang -std=c99 -Wall greedy.c -lm -o greedy

mario: mario.c
	clang -std=c99 -Wall mario.c -o mario
