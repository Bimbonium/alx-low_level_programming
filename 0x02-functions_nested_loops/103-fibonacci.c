#include <stdio.h>
#include <stdlib.h>

/**
 * main - fibb sequence
 * Return: 0
 */

int main(void)
{
	long int i;
	long int sum = 1;
	long int j = 2;
	long int k;
	long int sum2 = 0;

	printf("%ld, ", sum);

	for (i = 1; i <= 50; i++)
	{
		k = sum + j; /* at first run, sum =3*/
		sum = j;
		j = k;
		if ((sum % 2 == 0) && (sum <= 4000000))
		{
			sum2 += sum;
		}
	}
	printf("%ld\n", sum2);
	return (0);
}
