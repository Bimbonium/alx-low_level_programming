#include <stdio.h>
/**
 * main - function to test the workings of putchar and
 * more specifically to get every three digits where ijk != kji && ijk != ikj
 * and should be sorted in ascending order with a comma after each word
 * Return: 0
 */


int main(void)
{

	int i;
	int j;
	int k;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			for (k = 0; k <= 9; k++)
			{
				if ((k > j) && (j > i))
				{   putchar ('0' + i);
					putchar ('0' + j);
					putchar ('0' + k);
					if ((i != 7) || (j != 8) || (k != 9))
					{   putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
