#include <stdio.h>

/*
	 print Fahrenheit-Celsius table
	 using c = (5/9)(f-32)
	 for F = 0, 20, ..., 300
*/
void main()
{
	float far, cel, low, up, inc;

	low = 0;
	up = 300;
	inc = 20;

	far = low;

	printf("Fahr Celsius\n");

	while (far <= up) {
		cel = (5.0/9.0) * (far - 32.0);
		printf("%3.0f %6.1f\n", far, cel);
		far = far + inc;
	}

	// cel to far

	cel = low;

	printf("Cels Far\n");

	while (cel <= up) {
		far = cel * (9.0/5.0) + 32.0;
		printf("%3.0f %6.1f\n", cel, far);
		cel = cel + inc;
	}
}
