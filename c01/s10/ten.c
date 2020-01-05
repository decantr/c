#include <stdio.h>

// copy in to out, replace \t, \b and \\ with string literals
int main()
{
	int c = 0;

	while ((c = getchar()) != EOF) {
		if (c == '\t') printf("\\t");
		else if (c == '\b') printf("\\b");
		else if (c == '\\') printf("\\\\");
		else putchar(c);
	}
}
