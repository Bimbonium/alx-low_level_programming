#include <stdio.h>
/**
 * main - function to test the workings of putchar and
 * more specifically to get every two digits where ij != ji
 * and should be sorted in ascending order with a comma after each word
 * Return: 0
 */


int main(void)
{
	int i;
	int j;

	for (i = 0; i <= 9; i++)
	{

		for (j = 0; j <= 9; j++)
		{
			if (j > i)
			{   putchar('0' + i);
			    putchar('0' + j);
			if ((i != 8) || (j != 9))
			    {   putchar(',');
				putchar(' ');
			}
			}
		}
	}
	putchar('\n');
return (0);
}
