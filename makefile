all:mystr.o
	gcc mystr.o

mystr.o: mystr.c mystr.h
	gcc -c mystr.c
