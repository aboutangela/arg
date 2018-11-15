all: sep.o
	gcc -o test sep.o

sep.o: sep.c
	gcc -c sep.c

run:
	./test

clean:
	rm *.o
	rm ./test
