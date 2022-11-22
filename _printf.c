#include "main.h"
#include <stdarg.h>

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
	int i;
	va_list args;
	int num = 0, argc = 0;
	
	for (i = 0; format[i]; i++)
	{
		if (format[i] == '%')
			argc++;
	}
	va_start(args, format);
	for (i = 0; format[i]; i++)
	{
		if (format[i] == '%')
		{
			i++;
			continue;
		}
		_putchar(format[i]);
		num++;
	}
	/*va_arg(args, )*/;
	va_end (args);	
	return (num);
}
