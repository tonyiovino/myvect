#include <stdio.h>
#include "myvect_sort.h"

/* Questa funzione la sposto in myvect.h? */
void myvect_swap(int v[], int i, int j, const int size){

	int temp;

	temp = v[i];
	v[i] = v[j];
	v[j] = temp;
}

void myvect_bubble_sort(int v[], const int size){

	int pass;
	int i;

	for (pass = 1; pass < size-1; pass++) {

		for (i = 0; i < size-1; i++) {
			if (v[i] > v[i+1]) {
				myvect_swap(v, i, i+1, size);
			}
		}
	}
}