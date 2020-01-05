#include <stdio.h>

// copy input to output, ignoring repeated blanks
int main()
{
	int c, bl;

	c = bl = 0;

	while ((c = getchar()) != EOF) {
		if (c == ' ') ++bl;
		else bl = 0;

		if (bl < 2) putchar(c);
	}
}
