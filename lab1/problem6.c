#include <stdio.h>
#include <stdlib.h>

/* had some trouble initially because i was having trouble using fgets. found 
 * this article (https://www.thecrazyprogrammer.com/2021/05/fgets-vs-scanf.html)
 * and had a much easier time after. */

/* to be honest, I was spinning my wheels when trying to write my own bubble sort from 
 * scratch, so I took the example from here (https://www.geeksforgeeks.org/bubble-sort/
 * and implemented it in program.*/

void swap(int* xp, int* yp) {
	int temp = *xp;
	*xp = *yp;
	*yp = temp;
}

void bubbleSort(int array[], int length) {
	int i, j;
	for (i = 0; i < length - 1; i++)
		for (j = 0; j < length - i - 1; j++)
			if (array[j] > array[j + 1])
				swap(&array[j], &array[j + 1]);
}

void printArray(int array[], int size) {
	int i;
	for (i = 0; i < size; i++)
		printf("%d ", array[i]);
	printf("\n");
}

int main() {

	int array[99], length, i;
	
	printf("How many values to sort (<100)? ");
	scanf("%d", &length);

	for (i = 0; i < length; i++) {
		printf("Enter a number: ");
		scanf("%d", &array[i]);
	}
	
	bubbleSort(array, length);
	printf("The sorted numbers are: ");
	printArray(array, length);
}
