#include <stdio.h>

#define MAXLINE 1000

int getlin(char line[], int maxline);
void copy(char to[], char from[]);

/* print the longest input line */
int main()
{
	int len, max;
	char line[MAXLINE], longest[MAXLINE];

	max = 0;
	while ((len = getlin(line, MAXLINE)) > 0)
		if (len > max) {
			max = len;
			copy(longest, line);
		}

	if (max > 0)
		printf("%d | %s", max, longest);

}

/* getline: read a line into s, return length */
int getlin(char s[], int lim)
{
	int c, i;

	for (i = 0; i < lim - 1 &&
			(c = getchar() ) != EOF &&
			c != '\n'; ++i)
		s[i] = c;

	if (c == '\n'){
		s[i] = c;
		++i;
	}

	s[i] = '\0';
	return i;
}

/* copy: copy 'from' into 'to'; assu,e to is big enough */
void copy(char to[], char from[])
{
	int i;

	i = 0;
	while ((to[i] = from[i]) != '\0')
		++i;
}
