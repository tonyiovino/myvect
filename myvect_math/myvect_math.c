#include <stdio.h>

int myvect_sum(int v[], const int size){

	int sum = 0;
	int i;

	for (i = 0; i < size; i++) {
		sum += v[i];
	}

	return sum;
}

double myvect_mean(int v[], const int size){

	double mean;
	int i;

	for (i = 0; i < size; i++) {
		v[i] = 1;
		printf("%d", i);
	}

	return mean;
}

/*void myvect_sequence(int v[], const int size, const int start, const int step){

	int i, num;
	
	num = start;
	for (i = 0; i < size; i++) {
		v[i] = num;
		num += step;
	}
}

void myvect_random(int v[], const int size, const int min, const int max){

	int i;

	for (i = 0; i < size; i++) {
		v[i] = random_between(min, max);
	}
}

void myvect_print(const int v[], const int size){

	int i;

	for (i = 0; i < size; i++) {
		printf("%d ", v[i]);
	}
	putchar('\n');
}

void myvect_reverse(int v[], const int size){

	int i;
	int temp;

	for (i = 0; i < size/2; i++) {
		temp = v[i];
		v[i] = v[size-i-1];
		v[size-i-1] = temp;
	}
}*/