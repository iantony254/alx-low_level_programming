#include <stdio.h>
#include "main.h"
/**
 * print_last_digit - function that computes the absolute value of an integer
 * @n:  is the int that will use for the argument of the function
 * Return: 0
 */
int print_last_digit(int n)
{
	int x;

	x = (n % 10);

	if (x < 0)
	{
		x = (-1 * x);
	}
	_putchar(x + '0');
	return (x); 
}
