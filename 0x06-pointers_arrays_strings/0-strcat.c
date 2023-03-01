#include <stdio.h>
#include "main.h"

char *_strncat(char *dest, char *src, int n)
{
   //while dest exists and isn't null terminator yet
   while (*dest)
       dest++;
   // replace dest while src exists and insert nulls till n bytes
   for (i = 0; i < n; i++)
   {
	while (*src)
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
   }
}
