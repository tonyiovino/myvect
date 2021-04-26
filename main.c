#include <stdio.h>
#include "myvect.h"

int main() {

    int num[10];

    myvect_init();

    myvect_zeroes(num, 10);

    myvect_sequence(num, 10, 3, 2);

    myvect_print(num, 10);

    myvect_random(num, 10, 1, 5);

    myvect_print(num, 10);

    return 0;
}