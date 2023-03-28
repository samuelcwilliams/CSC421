#include <stdio.h>
#include <stdlib.h>

int main() {
	char num1[25], num2[25], num3[25];
	double array[3], average;
	
	printf("Enter a number: ");
	fgets(num1, 25, stdin);
	printf("Enter a number: ");
	fgets(num2, 25, stdin);
	printf("Enter a number: ");
	fgets(num3, 25, stdin);

	array[0] = atoi(num1);
	array[1] = atoi(num2);
	array[2] = atoi(num3);

	printf("The array is [%lf, %lf, %lf].\n", array[0], array[1], array[2]);
	
	average = (array[0] + array[1] + array[2]) / 3;
	printf("The average of the array values is %lf.", average);
}
