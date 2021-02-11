#include <stdio.h>

#define MAXLINE 1000

int getln(char line[], int maxline);
void str_rev(char line[], int len);

/* reverse each line of the input */
int main() {
	int len;
	char line[MAXLINE];

	while ((len = getln(line, MAXLINE)) > 0)
	{
		str_rev( line, len );
		printf( "%s", line );
	}
}

/* getline: read a line into s, return length */
int getln(char s[], int lim) {
	int c, i;

	for ( i = 0;
				i < lim - 1 && (c = getchar() ) != EOF && c != '\n';
				++i )
		s[i] = c;

	if (c == '\n'){
		s[i] = c;
		++i;
	}

	s[i] = '\0';
	return i;
}

void str_rev( char line[], int len ) {
	int i, j, tmp;

	for ( i = len - 2, j = 0; i > j; --i,++j ) {
		tmp = line[i];

		line[i] = line[j];
		line[j] = tmp;
	}
}

