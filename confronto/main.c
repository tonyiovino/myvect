#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#include "myvect.h"
#include "myvect_sort.h"

int compare_int(const void *a, const void *b);

int main() {

	#define SIZE_V 100000

	long int i;
	int v[SIZE_V];
	int v_backup[SIZE_V];
	double time;
	clock_t inizio, fine;

	myvect_init();

	myvect_random(v, SIZE_V, 1, 1000);

	printf("Sono stati generati %d numeri\n", SIZE_V);

	for (i = 0; i < SIZE_V; i++) v_backup[i] = v[i];
	inizio = clock();

	myvect_bubble_sort(v, SIZE_V);

	fine = clock();
	
	time = (double)(fine - inizio) / CLOCKS_PER_SEC;

	printf("Tempo che ha impiegato bubble sort a ordinare un vettore di %d numeri: %f\n", SIZE_V, time);

	for (i = 0; i < SIZE_V; i++) v[i] = v_backup[i];

	inizio = clock();

	myvect_selection_sort(v, SIZE_V);

	fine = clock();
	
	time = (double)(fine - inizio) / CLOCKS_PER_SEC;

	printf("Tempo che ha impiegato selection sort a ordinare un vettore di %d numeri: %f\n", SIZE_V, time);

	for (i = 0; i < SIZE_V; i++) v[i] = v_backup[i];

	inizio = clock();

	qsort(v, SIZE_V, sizeof(int), compare_int);

	fine = clock();
	
	time = (double)(fine - inizio) / CLOCKS_PER_SEC;

	printf("Tempo che ha impiegato qsort a ordinare un vettore di %d numeri: %f\n", SIZE_V, time);

	return 0;
}

int compare_int(const void *a, const void *b){

	const int *pa = (const int *)a;
	const int *pb = (const int *)b;

	return *pa - *pb; /* serve per vedere chi arriva prima e chi arriva dopo */
}