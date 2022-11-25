#include "main.h"
#include <stdarg.h>

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
	char *strarg;
	char carg;

	if (format == NULL)
		return (0);
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
			if (format[i] == 'c')
			{
				carg = va_arg(args, int);
				_putchar(carg);
				num++;
			}
			else if (format[i] == 's')
			{
				strarg = va_arg(args, char*);
				_putstring(strarg);
				num += _len(strarg);
			}
			else if (format[i] == 'd' || format[i] == 'i')
			{
				itoa(va_arg(args, int), strarg);
				_putstring(strarg);
				num += _len(strarg);
			}
			else
			{
				_putchar(format[i - 1]);
				_putchar(format[i]);
				num++;
			}
			continue;
		}
		_putchar(format[i]);
		num++;
	}
	va_end(args);
	return (num);
}
