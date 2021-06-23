#include <stdio.h>
#include "myvect.h"
#include "myvect_search.h"
#include "myvect_sort.h"

int main() {

	#define N 10

	int v[N];
	int num, trovato;

	myvect_init();

	myvect_random(v, N, 1, 20);

	printf("Ecoo il vettore:\n");
	myvect_print(v, N);
	putchar('\n');

	printf("Inserisci il numero da trovare: ");
	scanf("%d", &num);
	putchar('\n');
	
	myvect_selection_sort(v, N);
	
	trovato = myvect_binary_search(v, N, num);

	if (trovato >= 0) {
		printf("Trovato il numero %d alla posizione: %d\n", num, trovato);
	}
	else {
		printf("Il numero %d non è stato trovato nel vettore.\n", num);
	}

	return 0;
}