CC=gcc
CFLAGS=-Wall -ansi -pedantic
LDLIBS=

main: random.o myvect.o myvect_sort.o main.o

main.o: main.c myvect.h myvect_sort.h
myvect.o : myvect.c myvect.h random.h
myvect_sort.o : myvect_sort.c myvect_sort.h
random.o: random.c random.h

.PHONY: clean
clean:
	rm -f *.o main