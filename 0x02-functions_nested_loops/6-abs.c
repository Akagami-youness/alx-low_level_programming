#include "main.h"
/**
* _abs - Computes the absolute value
* of an interger
*
* @i: The input nuber is integer
*
* Return: absolute value.
*/
int _abs(int i)
{
	if (i >= 0)
	{
		return (i);
	}
	else
	{
		return (i * -1);
	}
	_putchar('\n');
}
