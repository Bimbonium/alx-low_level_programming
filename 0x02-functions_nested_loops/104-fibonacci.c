#include <stdio.h>
#include <stdlib.h>

/**
 * main - fibb sequence
 * Return: 0
 */

int main(void)
{
	int i;
	float sum = 1.0;
	float j = 2.0;
	float k;

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
