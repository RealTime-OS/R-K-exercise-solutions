#include <stdio.h>

//my terminal doesn't pick up 'backspace' properly

int main ()
{
	int c = '\0';

	while ((c = getchar()) != EOF)
		if (c == '\t')
			printf("\\t");
		else if (c == 127)
			printf("\\b");
		else if (c == '\\')
			printf("\\");
		else 
			putchar(c);
}