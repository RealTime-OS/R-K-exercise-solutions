#include <stdio.h>

int main (void)
{
	
	int c, i, nc;

	nc = 0; //new character counter d 

	i = 0;

	c = '\0';

	int wlen[10]; //array for occurance of word lengths 

	for (i = 0; i < 10; ++i)
		wlen[i] = 0;

	while ((c = getchar()) != EOF)
	{
		++nc;
		if (c == ' ' || c == '\n' || c == '\t')
		{ 
			++wlen[nc-1];
			nc = 0;	
		}
	}

	for (i = 0; i < 10; ++i)
		printf("%d\n", wlen[i]);

return 0; //main returns 0 to denote normal execution to the calling environment 

}
