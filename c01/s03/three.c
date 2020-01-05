#include <stdio.h>

/*
	 print Fahrenheit-Celsius table
*/
void main()
{
	int far;

	printf("Fahr Celsius\n");

	for (far = 300; far >= 0; far = far - 20) {
		printf("%3d %6.1f\n", far, (5.0/9.0) * (far - 32.0));
	}
}
