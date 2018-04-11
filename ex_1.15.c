# include <stdio.h>

void convert(int lower, int upper, int step); //function prototype 

int main (void)
{

	convert (0,300,20);

	return 0;
}

/* Function definition for temp convertor table */

void convert (int lower, int upper, int step)
{
	int fahr, celsius;

	fahr = lower;
	while (fahr <= upper)
	{
		celsius = 5 * (fahr- 32) / 9;
		printf("%d\t%d\n", fahr, celsius);
		fahr = fahr + step;
	}
}