#include "main.h"
/**
 * _strlen_recursion - prints the lenght of a str
 * @s: the char to print
 * Return: 0 is success
 */

int _strlen_recursion(char *s)
{
	int a = 0;

	if (*s)
	{
		a++;
		a = a + _strlen_recursion(s + 1);
	}
	return (a);
}
