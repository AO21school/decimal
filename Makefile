all: main

main: main.c
	gcc main.c -o main
	./main
	rm main