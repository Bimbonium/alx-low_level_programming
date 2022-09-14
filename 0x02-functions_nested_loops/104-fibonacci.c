#include <stdio.h>
#include <stdlib.h>

/**
 * main - fibb sequence
 * Return: 0
 */

int main(void)
{
	int i;
	double sum = 1.0;
	double j = 2.0;
	double k;

	printf("%.0f, ", sum);
	for (i = 1; i < 98; i++)
	{
		k = sum + j; /* at first run, sum =3*/
		sum = j;
		j = k;
		printf("%.0f", sum);

		if (i != 97)
		{
			printf(", ");
		}
	}
	putchar('\n');
	return (0);
}
