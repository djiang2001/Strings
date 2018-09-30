all:mystr.o
	gcc -o Test mystr.o

mystr.o: mystr.c mystr.h
	gcc -c mystr.c

run:
	./Test
