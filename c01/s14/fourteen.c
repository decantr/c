#include <stdio.h>

// count each instance of each char
void main()
{
	int c, i;
	int arrocar[127];

	for (i = 0; i < 127; ++i)
		arrocar[i] = 0;

	while ((c = getchar()) != EOF)
		if (c > 32 && c < 127)
			++arrocar[c];

	for (i = 32; i < 127; ++i)
		if (arrocar[i] != 0)
			printf("%2c | %3d\n", i, arrocar[i]);
}
