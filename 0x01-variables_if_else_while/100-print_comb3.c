#include <stdio.h>

/**
 * main - Prints all possible combinations of two different digits,
 *        in ascending order, separated by a comma followed by a space.
 *
 * Return: Always 0.
 */
int main(void)
{
	int i1, i2;

	for (i1 = 0; i1 < 9; i1++)
	{
		for (i2 = i1 + 1; i2 < 10; i2++)
		{
			putchar((i1 % 10) + '0');
			putchar((i2 % 10) + '0');

			if (i1 == 8 && i2 == 9)
				break;	
			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');

	return (0);
}
