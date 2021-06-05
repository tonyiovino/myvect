#include <stdio.h>
#include "myvect.h"
#include "myvect_math.h"

int myvect_sum(int v[], const int size){

	int sum = 0;
	int i;

	for (i = 0; i < size; i++) {
		sum += v[i];
	}

	return sum;
}

double myvect_mean(int v[], const int size){

	return (double) myvect_sum(v, size) / size;
}

int myvect_min(const int v[], const int size){

	return v[myvect_min_index(v, size)];
}

int myvect_max(const int v[], const int size){

	return v[myvect_max_index(v, size)];
}

int myvect_min_index(const int v[], const int size){

	int min;
	int pos;
	int i;

	min = v[0];
	pos = 0;
	for (i = 1; i < size; i++) {
		if (v[i] < min){
			min = v[i];
			pos = i;
		}
	}

	return pos;
}

int myvect_max_index(const int v[], const int size){

	int max;
	int pos;
	int i;

	max = v[0];
	pos = 0;
	for (i = 1; i < size; i++) {
		if (v[i] > max){
			max = v[i];
			pos = i;
		}
	}

	return pos;
}

int myvect_dot_product(const int v1[], const int v2[], const int size){

	int prod = 0;
	int i;

	for (i = 0; i < size; i++) {
		prod += v1[i] * v2[i];
	}

	return prod;
}