#include <stdio.h>
#include "main.h"
/**
 * main - function to print
 *
 * Return: 0
 */
int main(void)
{
	char ptchr[8] = {'_', 'p', 'u', 't', 'c', 'h', 'a', 'r'};
	unsigned int p;

	for(p = 0; p < sizeof(ptchr); p++)
	{
		_putchar(ptchr[p]);
	}
_putchar('\n');
return (0);
}
