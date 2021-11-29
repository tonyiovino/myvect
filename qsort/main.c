#include <stdio.h>
#include <stdlib.h>
#include "myvect.h"

int compare_int(const void *a, const void *b);

int main() {

	#define SIZE_V 10

	int v[SIZE_V];

	myvect_init();

	myvect_random(v, SIZE_V, 1, 20);
	myvect_print(v, SIZE_V);
	putchar('\n');

	qsort(v, SIZE_V, sizeof(int), compare_int);
	myvect_print(v, SIZE_V);
	putchar('\n');

	return 0;
}

int compare_int(const void *a, const void *b){

	const int *pa = (const int *)a;
	const int *pb = (const int *)b;

	return *pa - *pb;
}