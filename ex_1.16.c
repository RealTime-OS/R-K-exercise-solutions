#include <stdio.h>

#define MAXLINE 1000

int getline(char line[], int maxline);

void copy(char to[], char from[]);

int main (void)
{
	int len;
	int max;
	char line[MAXLINE];
	char longest[MAXLINE];

	max = 0;
	while ((len = getline(line,MAXLINE)) > 0)
	{
		if (len > max)
		{
			max = len;
			copy(longest, line);
		}	
	}

	return 0;
}

/*getline function */

int getline (char s[], int lim)
{
	int c, i;

	for (i = 0; i < lim-1 && (c=getchar()) != EOF && c!= '\n'; ++i)
	s[i] = c;
	if (c == '\n'){
		s[i] = c;
		++i;
	}

}