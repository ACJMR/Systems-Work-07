all: list.o test.o
	gcc list.o test.o

list.o: list.c list.h
	gcc -c list.c

test.o: test.c list.h
	gcc -c test.c

run:
	./a.out

clean:
	rm -f *.o *.out
