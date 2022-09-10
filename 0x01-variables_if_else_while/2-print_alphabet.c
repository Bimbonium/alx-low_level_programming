#include <stdio.h>
#include <stdlib.h>

/**
 * main - function to print lowercase characters
 * Return:0
 */

int main(void)
{

	/*using a for loop*/
	char a;

	for (a = 'a'; a <= 'z'; a++)
		putchar(a);
	putchar('\n');
	return (0);
}

/** No reason not to declare a variable a i.e. char a
	 *  that will warehouse all the alphabets and I will just putchar
	 *  for a; somethins like
	 *  char a = 'abcdefghijklmnopqrstuvwxyz'
	 *  putchar(a)
	 *  putchar("\n")
	 *  This is not a dynamic code but it works just fine in my opinion
*/

