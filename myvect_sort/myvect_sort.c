#include "myvect.h"
#include "myvect_math.h"
#include "myvect_sort.h"

void myvect_bubble_sort(int v[], const int size){

	int pass;
	int i;
	int swap = 1;

	for (pass = 1; pass < size-1 && swap != 0; pass++) {

		swap = 0;
		for (i = 0; i < size-pass; i++) {
			if (v[i] > v[i+1]) {
				myvect_swap(v, i, i+1, size);
				swap = 1;
			}
		}
	}
}

void myvect_selection_sort(int v[], const int size){

	int pos_min;

	if (size == 1) return;

	pos_min = myvect_min_index(v, size);

	myvect_swap(v, 0, pos_min, size);

	myvect_selection_sort(&v[1], size-1);
}