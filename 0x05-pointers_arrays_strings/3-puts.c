#include <stdio.h>
#include "main.h"

/**
 * _puts - function that print a string, followed by new line
* @str: pointer that point the string
* Return: nothing
*/
{
	int k = 0;

	while (*(str + k))
	{
		_putchar(*(str + k));
	}
	_putchar('\n');
}
