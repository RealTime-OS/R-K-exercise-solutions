# include <stdio.h>

int main ()
{
	int c = '\0';

	while ((c = getchar()) != EOF)
		if (c == ' ')
			printf("\n");
		else 
			putchar(c);
}