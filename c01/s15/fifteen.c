#include <stdio.h>

#define LOWER	0
#define UPPER	300
#define INC		20

float toCelsius(float fahr);

// print Fahrenheit-Celsius table
int main()
{
	int fahr;

	printf("Fahr Celsius\n");

	for (fahr = LOWER; fahr <= UPPER; fahr = fahr + INC) {
		printf("%3d %6.1f\n", fahr, toCelsius(fahr));
	}

	return 0;
}

float toCelsius(float fahr) {
	return (5.0/9.0) * (fahr - 32.0);
}
