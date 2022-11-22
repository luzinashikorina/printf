#include "main.h"

/**
 * _len - length of string
 * @str: the string
 * Return: the length
 */
int _len(char *str)
{
	int len = 0;
	
	while (str[len] != '\0')
		len++;
	return (len);
}
