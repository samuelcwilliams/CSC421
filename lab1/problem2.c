#include <stdio.h>
#include <stdlib.h>

int main() {
	double array[5], sum;
	
	array[0] = 5;
	array[1] = 8;
	array[2] = 10;
	array[3] = 13;
	array[4] = 19;
	
	sum = array[0] + array[1] + array[2] + array[3] + array[4];
	printf("The array is: [%lf, %lf, %lf, %lf, %lf].\n", array[0], array[1], array[2], array[3], array[4]);
	printf("The sum of the array is %lf", sum);
}
