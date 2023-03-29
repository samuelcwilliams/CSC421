#include <stdio.h>
#include <stdlib.h>

int main() {
	char num1[25], num2[25], num3[25], num4[25], num5[25], num6[25];
	double array1[3], array2[3], array3[6];
	
	printf("--------------------------------\n");
	printf("Enter the first array's values: \n");
	printf("--------------------------------\n");

	printf("Enter a number: ");
	fgets(num1, 25, stdin);
	printf("Enter a number: ");
	fgets(num2, 25, stdin);
	printf("Enter a number: ");
	fgets(num3, 25, stdin);

	array1[0] = atoi(num1);
	array1[1] = atoi(num2);
	array1[2] = atoi(num3);

	printf("--------------------------------\n");
	printf("Enter the second array's values \n");
	printf("--------------------------------\n");

	printf("Enter a number: ");
	fgets(num4, 25, stdin);
	printf("Enter a number: ");
	fgets(num5, 25, stdin);
	printf("Enter a number: ");
	fgets(num6, 25, stdin);

	array2[0] = atoi(num4);
	array2[1] = atoi(num5);
	array2[2] = atoi(num6);

	array3[0] = array1[0];
	array3[1] = array1[1];
	array3[2] = array1[2];
	array3[3] = array2[0];
	array3[4] = array2[1];
	array3[5] = array2[2];

	printf("\nThe merged array is [%lf, %lf, %lf, %lf, %lf, %lf]", array3[0], array3[1], array3[2], array3[3], array3[4], array3[5]);
}


























