#include <stdio.h>

#define MAXLINE 1000

int getln(char line[], int maxline);
int trim(char line[], int len);

/* trim whitespace and ignore empty lines */
int main()
{
	int len;
	char line[MAXLINE];

	while ((len = getln(line, MAXLINE)) > 0)

		if ( trim( line, len ) > 0 )
			printf("%s", line);
}

/* getline: read a line into s, return length */
int getln(char s[], int lim)
{
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

int trim(char line[], int len)
{
	int i;

	for ( i = len - 2; ( line[i] == ' ' || line[i] == '\t') && i > 0 ; i-- )
		continue;

	if ( i > 0 && i != len - 2 )
	{
		line[ i ] = '\n';
		line[ ++i ] = '\0';
	}

	return i;
}

