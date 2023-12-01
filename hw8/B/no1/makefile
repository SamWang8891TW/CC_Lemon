CC = gcc

all: a.out

a.out: tools.o Main.o
	$(CC) -o a.out tools.o Main.o

tools.o: tools.c tools.h
	$(CC) -c tools.c

Main.o: Main.c tools.h
	$(CC) -c Main.c

clean:
	rm -f a.out *.o