#include "main.h"

/**
 * reverse_array - function to reverse array
 * @a: array to be reversed
 * @n: number of elements in the array
 * Return: void, the reversed array
 */

void reverse_array(int *a, int n)
{

	int i;
	int j;

	for (i = 0; i < n / 2; i++)
	{
		j = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = j;
	}
}
