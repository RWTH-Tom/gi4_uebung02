CC = gcc
CFLAGS = -Wall -g -m32
LDFLAGS =

main: main.c utils.h types.h defs.h input.o

input.o: input.c types.h

utils.o: utils.h types.h defs.h

clean:
	rm -rf main input.o utils.o

install: main
	cp main ~/editor
	chmod =555 ~/editor
