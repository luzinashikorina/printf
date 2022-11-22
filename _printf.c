#include "main.h"

/**
 * _len - counts length
 * @str: the string
 * Return: the length
 */
int _len(char *str)
{
	int len;

	for (len = 0; str[len]; len++)
	;
	return len;
}

/**
 * _printf - outputs according to a format
 * @format: str
 * Return: num of chars printed
 */
int _printf(const char *format, ...)
{
	int i, num;

	for (i = 0; format[i]; i++)
	{
		if (format[i] == '%')

	}
	return (num);
}
