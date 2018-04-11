#include <stdio.h>

int main () 
{
	int c, nt, nl, bl;

	nt = 0;
	c = '\0';
	nl = '\0';
	bl = '\0';

	while ((c = getchar()) != EOF)
		if (c == '\t')
			++nt;
		else if (c == '\0')
			++bl;
		else if (c == '\n')
			++nl;
	printf("total number of tabs: %d\n", nt);
	printf("total number of blanks: %d\n", bl);
	printf("total number of new lines: %d\n", nl);
}