#include <stdio.h>
#include "myvect.h"
#include "myvect_math.h"

int main() {

	int v[10];

	myvect_init();

	myvect_random(v, 10, 1, 20);
	myvect_print(v, 10);
	putchar('\n');

	printf("Adesso la somma di tutti i numeri\n");
	printf("%d", myvect_sum(v, 10));
	putchar('\n');

	return 0;
}