#include "main.h"
#include <stdio.h>

/**
 * puts_half - prints a string
 * @str: string to print
 */
void puts_half(char *str)
{
	int i, len = _strlen(str);

	for (i = ((len - 1) / 2) + 1; i < len; i++)
		putchar(*(str + i));
	putchar(10);
}
