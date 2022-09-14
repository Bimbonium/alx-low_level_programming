#include <stdio.h>
#include <stdlib.h>

/**
 * main - fibb sequence
 * Return: 0
 */

int main(void)
{
	int i;

	unsigned long float sum = 1.0;
	unsigned long float j = 2.0;
	unsigned long float k;

	printf("%.0lf, ", sum);
	for (i = 1; i < 98; i++)
	{
		k = sum + j; /* at first run, sum =3*/
		sum = j;
		j = k;
		printf("%.0lf", sum); /* use capital L for long double*/

		if (i != 97)
		{
			printf(", ");
		}
	}
	putchar('\n');
	return (0);
}
