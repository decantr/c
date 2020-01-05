#include <stdio.h>

#define LOWER	0
#define UPPER	300
#define INC		20

/*
	 print Fahrenheit-Celsius table
*/
int main()
{
	int far;

	printf("Fahr Celsius\n");

	for (far = LOWER; far <= UPPER; far = far + INC) {
		printf("%3d %6.1f\n", far, (5.0/9.0) * (far - 32.0));
	}
}
