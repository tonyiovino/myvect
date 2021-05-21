#include <stdio.h>
#include "myvect.h"

int main() {

	int v[10];

	myvect_init();

	printf("Tutti i numeri a 0\n");
	myvect_zeroes(v, 10);
	myvect_print(v, 10);
	putchar('\n');

	printf("Tutti i numeri a 1\n");
	myvect_ones(v, 10);
	myvect_print(v, 10);
	putchar('\n');

	printf("Modifichiamoli un po'\n");
	myvect_sequence(v, 10, 1, 2);
	myvect_print(v, 10);
	putchar('\n');

	printf("Okay, ora generiamone qualcuno\n");
	myvect_random(v, 10, 1, 20);
	myvect_print(v, 10);
	putchar('\n');

	printf("Adesso al contrario\n");
	myvect_reverse(v, 10);
	myvect_print(v, 10);
	putchar('\n');

	return 0;
}