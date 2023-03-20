#include <stdio.h>

int main() {
	int a = 125, b = 12345; 
	long ax = 1234567890; 
	short s = 4043; 
	float x = 2.13459; 
	double dx = 1.1415927; 
	char c = 'W'; 
	unsigned long ux = 2541567890;
	
	int a_plus_c = a + c;
	printf("a + c = %d\n", a_plus_c);

	int x_plus_c = x + c;
	printf("x + c = %d\n", x_plus_c);

	int dx_plus_x = dx + x;
	printf("dx + x = %d\n", dx_plus_x);

	int dx_plus_ax = ((int) dx) + ax;
	printf("((int) dx) + ax = %d\n", dx_plus_ax);

	int a_plus_x = a + x;
	printf("a + x = %d\n", a_plus_x);

	int s_plus_b = s + b;
	printf("s + b = %d\n", s_plus_b);

	int ax_plus_b = ax + b;
	printf("ax + b = %d\n", ax_plus_b);

	int s_plus_c = s + c;
	printf("s + c = %d\n", s_plus_c);

	int ax_plus_c = ax + c;
	printf("ax + c = %d\n", ax_plus_c);
 
    // figuring out i needed to use %li took me more time than 
	// the rest of the assignment put together... facepalm 
	long ax_plus_ux = ax + ux;	
	printf("ax + ux = %li\n", ax_plus_ux);
}
