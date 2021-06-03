#include <stdio.h>
#include "myvect.h"
#include "myvect_math.h"

int main() {

	#define N 10

	int v[N];

	myvect_init();

	myvect_random(v, N, 1, 20);

	printf("Ecoo i numeri:\n");
	myvect_print(v, N);
	putchar('\n');

	printf("La somma di tutti i numeri: ");
	printf("%d\n", myvect_sum(v, N));
	putchar('\n');

	printf("La media di tutti i numeri: ");
	printf("%.2f\n", myvect_mean(v, N));
	putchar('\n');

	printf("Il numero più piccolo è: ");
	printf("%d\n", myvect_min(v, N));
	printf("E la sua posizione è: ");
	printf("%d\n", myvect_min_index(v, N));
	putchar('\n');

	printf("Il numero più grande è: ");
	printf("%d\n", myvect_max(v, N));
	printf("E la sua posizione è: ");
	printf("%d\n", myvect_max_index(v, N));
	putchar('\n');

	return 0;
}