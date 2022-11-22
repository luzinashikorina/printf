#include "main.h"
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>

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
	char s [sizeof(int) * 8 + 1];
	
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
				/*strarg = itoa(va_arg(args, int), s, 10);*/
				_putstring(itoa(va_arg(args, int), s, 10);
				num += _len(strarg);
			}
			else	
			{
				_putchar(format[i]);
				num++;
			}
			continue;
		}
		_putchar(format[i]);
		num++;
	}
	/*va_arg(args, )*/;
	va_end (args);	
	return (num);
}
