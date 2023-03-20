#include <stdio.h>

int main() {
	int height = 5, width = 3, area, perimeter;

	perimeter = height + height + width + width;
	area = height * width;

	printf("Perimeter of the rectangle = %d inches\n", perimeter);
	printf("Area of the rectangle = %d square inches", area);
}
