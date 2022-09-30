#include <stdio.h>
#define UNUSED(x) (void)(x)
/**
 * main - function to print number of arguments passed
 * @argc: number of arguments passed
 * @argv: vector of arguments passed
 * Return: 0
 */

int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		printf("Error\n");
		return (-1);
	}
	else
	{
		printf("%d", argv[0] * argv[1]);
		return (0);
	}
}
