#include "main.h"
/**
 *_print_rev_recursion - function to print string in reverse
 * @s: string to reverse
 */

_print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar (*s);
	}

	else
		_putchar('\n');
}
