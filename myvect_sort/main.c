#include <stdio.h>
#include "myvect.h"
#include "myvect_sort.h"

int main() {

	#define N 10

	int v[N];

	myvect_init();

	myvect_random(v, N, 1, 20);

	printf("Ecoo il vettore:\n");
	myvect_print(v, N);
	putchar('\n');

	myvect_bubble_sort(v, N);

	printf("Ecoo il vettore ordinato:\n");
	myvect_print(v, N);
	putchar('\n');

	return 0;
}