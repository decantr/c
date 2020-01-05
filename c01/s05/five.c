#include <stdio.h>

/*
	 copy input to output; 1st version
*/
void main()
{
	int c;

	printf("the value of EOF is %d\n", EOF);

	while ((c = getchar()) != EOF) {
		printf("%d", c != EOF);
		putchar(c);
	}
}
