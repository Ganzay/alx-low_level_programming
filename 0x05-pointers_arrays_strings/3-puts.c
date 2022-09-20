#include <stdio.h>
#include "main.h"

/**
 * _puts - prints a string to stdout
 * @str: pointer to the string to print
 *
 * Desscription: prints a string
 * On success: returns no error
 */

void _puts(char *str)
{
	int i = 0;

	while (*(str + i) != '\0')
	{
		putchar(*(str + i));
		i++;
	}
	putchar(10);
}
