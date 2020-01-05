#include <stdio.h>

// count blanks, tabs & newlines
int main()
{
	int c, bl, tb, nl;

	c = bl = tb = nl = 0;

	while ((c = getchar()) != EOF)
		if (c == '\n')
			++nl;
		else if (c == '\t')
			++tb;
		else if (c == ' ')
			++bl;

	printf("blanks: %d\ntabs: %d\nnewlines: %d\n", bl, tb, nl);
}
