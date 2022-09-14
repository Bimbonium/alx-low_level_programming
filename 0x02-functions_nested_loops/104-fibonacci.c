#include <stdio.h>
#include <stdlib.h>

/**
 * main - fibb sequence
 * Return: 0
 */

int main(void)
{
	int i;

	long double sum = 1.0;
	long double j = 2.0;
	long double k;

	printf("%.0Lf, ", sum);
	for (i = 1; i < 98; i++)
	{
		k = sum + j; /* at first run, sum =3*/
		sum = j;
		j = k;
		printf("%.0Lf", sum); /* use capital L for long double*/

		if (i != 97)
		{
			printf(", ");
		}
	}
	putchar('\n');
	return (0);
}
