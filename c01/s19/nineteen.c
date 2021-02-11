#include <stdio.h>

#define MAXLINE 1000

int getln(char line[], int maxline);
void str_rev(char line[], char out[], int len);

/* reverse each line of the input */
int main() {
	int len;
	char line[MAXLINE], out[MAXLINE];

	while ((len = getln(line, MAXLINE)) > 0)
	{
		str_rev( line, out, len );
		printf( "%s", out );
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

void str_rev( char line[], char out[], int len ) { 
	int i, j;
	for ( i = len - 2, j = 0; i >= 0; --i,++j ) {
		out[j] = line[i];
	}

	out[len - 1] = '\n';
	out[len] = '\0';
}

