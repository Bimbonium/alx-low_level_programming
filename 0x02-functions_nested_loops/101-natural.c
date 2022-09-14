#include <stdlib.h>
#include <stdio.h>

/**
 * main - function to print natural multiples of 3 or 5
 * Return: 0
 */

int main(void)
{
	int sum;
	int i;

	for (i = 1; i < 1024; i++)
	{
		if ((i % 3 == 0) || (i % 5 == 0))
		{
			sum += i;
		}
	}
	printf("%d\n", sum);
}
