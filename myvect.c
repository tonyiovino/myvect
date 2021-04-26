#include <stdio.h>
#include "random.h"

void myvect_init(void) {
	random_init();
}

void myvect_zeroes(int v[], const int size){

	int i;

	for (i = 0; i < size; i++) {
		v[i] = 0;
	}
}

void myvect_ones(int v[], const int size){

	int i;

	for (i = 0; i < size; i++) {
		v[i] = 1;
	}
}

void myvect_sequence(int v[], const int size, const int start, const int step){

	int i, num;
	
	num = start;
	for (i = 0; i < size; i++) {
		v[i] = num;
		num += step;
	}
}

void myvect_random(int v[], const int size, const int min, const int max){

	int i;

	for (i = 0; i < size; i++) {
		v[i] = random_between(min, max);
	}
}

void myvect_print(const int v[], const int size){

	int i;

	for (i = 0; i < size; i++) {
		printf("%d ", v[i]);
	}
	putchar('\n');
}

/*
void myvect_reverse(int v[], const int size){
	print("Help me, i can't do this\n");
}
*/