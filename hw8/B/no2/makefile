CC = gcc

all: a.out

a.out: Permutation.o Main.o
	$(CC) -o a.out Permutation.o Main.o

Permutation.o: Permutation.c Permutation.h
	$(CC) -c Permutation.c

Main.o: Main.c Permutation.h
	$(CC) -c Main.c

clean:
	rm -f a.out *.o