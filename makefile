all: mystr.o
	gcc -o mystr mystr.o

mystr.o: mystr.h mystr.c
	gcc -c mystr.c

run:
	./mystr

clean:
	rm *.o
