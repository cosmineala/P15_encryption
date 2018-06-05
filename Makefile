CC=gcc

CFLAGS=-c -Wall

all: encryption

encryption: main.o function.o crypting.o testing.o
	$(CC) main.o function.o crypting.o testing.o -o encryption

main.o: main.c
	$(CC) $(CFLAGS) main.c

function.o: function.c
	$(CC) $(CFLAGS) function.c

crypting.o: crypting.c
	$(CC) $(CFLAGS) crypting.c

testing.o: testing.c
	$(CC) $(CFLAGS) testing.c

clean:
	rm *.o *.txt encryption