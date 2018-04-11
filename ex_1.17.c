#include <stdio.h>
#define MAXLINE 1000

int pull(char line[], int maxline);

int main(void)
{
	int len;
	char line[MAXLINE];

	len = 0;

	while ((len = pull(line, MAXLINE)) > 0)
	{
		if (len > 80)
			printf("%s",line);
	}

return 0;

}


/* getline definition: read a line into s, return length */
int pull(char s[], int lim)

{
	int c, i;

	for (i=0; i < lim -1 && (c = getchar()) != EOF && c!='\n'; ++i)
		s[i] = c;
	if (c == '\n')
	{
		s[i] = c;
		++i;
	}       
	s[i] = '\0';
	return i;
}

/*  

while(there is a line)
	if(length of line > 80)
		print line
*/ 

