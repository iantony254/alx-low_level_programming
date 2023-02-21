#include <stdio.h>
#include "main.h"
/**
 * times_table -  a function that prints the 9 times table, starting with 0
 * x = row, y = column, i = digits of current result
 * Return: times table
 * add extra space past single digit
 */
void times_table(void)
{
	int x, y, i;

	for (x = 0; x <= 9; x++)
	{
		_putchar('0');
		_putchar(',');
		_putchar(' ');
		for (y = 1; y <= 9; y++)
		{
			i = (x * y);

			if ((i / 10) > 0)
			{
				_putchar((i / 10) + '0');
			}
			else
			{
				_putchar(' ');
			}
			_putchar((i % 10) + '0');

			if (y < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
