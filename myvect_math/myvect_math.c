#include <stdio.h>
#include "myvect.h"

int myvect_sum(int v[], const int size){

	int sum = 0;
	int i;

	for (i = 0; i < size; i++) {
		sum += v[i];
	}

	return sum;
}

double myvect_mean(int v[], const int size){

	int sum = 0;
	int i;

	/*
	Alternative:
	sum = myvect_sum(v, size);
	return (double) sum / size
	*/

	for (i = 0; i < size; i++) {
		sum += v[i];
	}

	return (double) sum / i;
}

int myvect_min(const int v[], const int size){

	int min;
	int i;

	min = v[0];
	for (i = 0; i < size; i++) {
		if (v[i] < min) min = v[i];
	}

	return min;
}

int myvect_max(const int v[], const int size){

	int max;
	int i;

	max = v[0];
	for (i = 0; i < size; i++) {
		if (v[i] > max) max = v[i];
	}

	return max;
}

int myvect_min_index(const int v[], const int size){

	int min;
	int pos;
	int i;

	min = v[0];
	pos = 0;
	for (i = 0; i < size; i++) {
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
	for (i = 0; i < size; i++) {
		if (v[i] < max){
			max = v[i];
			pos = i;
		}
	}

	return pos;
}