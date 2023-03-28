#include <stdio.h>
#include <stdlib.h>

int main() {
	char str[30];
	int num, sum;

	printf("Input an integer: ");
	fgets(str, 25, stdin);
	
	num = atoi(str);	
	sum = num + 5;

	printf("Output: %d", sum);
}
