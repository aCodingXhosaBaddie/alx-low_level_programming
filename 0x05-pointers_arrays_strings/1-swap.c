#include "main.h"

/**
 * swap_int -> given two inigers swap the values they are holdng
 * @a: parameter 1
 * @b: paraemeter 2
 */
void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
