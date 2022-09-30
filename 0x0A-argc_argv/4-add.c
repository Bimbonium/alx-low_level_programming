#include <stdio.h>
#define UNUSED(x) (void)(x)
/**
 * main - function to print number of arguments passed
 * @argc: number of arguments passed
 * @argv: vector of arguments passed
 * Return: 0
 */

int main(int argc, int *argv[])
{
	int i,j;

	for (i = 0; i < argc; i++)
	{
		if (argc == 0)
