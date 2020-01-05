#include <stdio.h>

#define LEN 15

// count digits, whitespace & others
int main()
{
	int c, i, j, m;
	int nochar[LEN];

	for (i = 0; i < LEN; ++i)
		nochar[i] = 0;

	i = 0;
	while ((c = getchar()) != EOF)
		if (c == ' ' || c == '\n' || c == '\t') {
			++nochar[i];
			i = 0;
		} else
			++i;
// hor
	// header
	putchar('\n');
	for (i = 0; i < ((LEN/2)-1); ++i)
		putchar(' ');
	printf("Horizontal Histogram\n");

	// make
	for (i = 1; i < LEN; ++i){
		printf("%2d|", i);
		for (j = 0; j < nochar[i]; ++j){
			printf("+");
		}
		putchar('\n');
	}

// vert
	// header
	putchar('\n');
	for (i = 0; i < ((LEN/2)-1); ++i)
		putchar(' ');
	printf("Vertical Histogram\n");

	// use m as the local maximum
	m = 0;
	for (i = 0; i < LEN; ++i)
		if (m < nochar[i])
			m = nochar[i];

	// plus for marker chars
	for (i = m; i > 0; --i) {
    printf("%2d|", i);

		for (j = 1; j < LEN; ++j)
			if (nochar[j] >= i) printf("%3c", '+');
			else printf("%3c", ' ');

		putchar('\n');
	}

	// horizontal rule
	for (i = 0; i < LEN; i++)
		if ( i == 0 ) printf("  |", '-');
		else printf("---");
	putchar('\n');

	// legend
	printf("   ");
	for (i = 1; i < LEN; ++i)
		printf("%3d", i);

	putchar('\n');
}
