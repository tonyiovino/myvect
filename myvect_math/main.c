#include <stdio.h>
#include "myvect.h"
#include "myvect_math.h"

int main() {

	#define N 10

	int v1[N];
	int v2[N];

	myvect_init();

	printf("**** Vettore 1:\n");

	myvect_random(v1, N, 1, 20);

	printf("Ecoo i numeri:\n");
	myvect_print(v1, N);
	putchar('\n');

	printf("La somma di tutti i numeri: ");
	printf("%d\n", myvect_sum(v1, N));
	putchar('\n');

	printf("La media di tutti i numeri: ");
	printf("%.2f\n", myvect_mean(v1, N));
	putchar('\n');

	printf("Il numero più piccolo è: ");
	printf("%d\n", myvect_min(v1, N));
	printf("E la sua posizione è: ");
	printf("%d\n", myvect_min_index(v1, N));
	putchar('\n');

	printf("Il numero più grande è: ");
	printf("%d\n", myvect_max(v1, N));
	printf("E la sua posizione è: ");
	printf("%d\n", myvect_max_index(v1, N));
	putchar('\n');

	putchar('\n');

	printf("**** Vettore 2:\n");

	myvect_random(v2, N, 1, 20);

	printf("Ecoo i numeri:\n");
	myvect_print(v2, N);
	putchar('\n');

	printf("La somma di tutti i numeri: ");
	printf("%d\n", myvect_sum(v2, N));
	putchar('\n');

	printf("La media di tutti i numeri: ");
	printf("%.2f\n", myvect_mean(v2, N));
	putchar('\n');

	printf("Il numero più piccolo è: ");
	printf("%d\n", myvect_min(v2, N));
	printf("E la sua posizione è: ");
	printf("%d\n", myvect_min_index(v2, N));
	putchar('\n');

	printf("Il numero più grande è: ");
	printf("%d\n", myvect_max(v2, N));
	printf("E la sua posizione è: ");
	printf("%d\n", myvect_max_index(v2, N));
	putchar('\n');

	putchar('\n');

	printf("**** Vettori 1 e 2:\n");
	printf("Il prodotto dei 2 vettori è: ");
	printf("%d\n", myvect_dot_product(v1, v2, N));
	putchar('\n');

	return 0;
}