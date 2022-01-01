CC=gcc
CFLAGS=-Wall -ansi -pedantic
LDLIBS=

main: random.o myvect_sort.o myvect_math.o myvect.o main.o

main.o: main.c myvect.h
myvect.o : myvect.c myvect.h random.h
myvect_sort.o : myvect_sort.c myvect_sort.h myvect_math.h
myvect_math.o: myvect_math.c myvect_math.h myvect.h
random.o: random.c random.h

.PHONY: clean
clean:
	rm -f *.o main