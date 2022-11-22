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
	int iarg;
	char carg;
	
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
				for (i = 0; strarg[i]; i++)
				{
					_putchar(strarg[i]);
					num++;
				}
			}
			else if (format[i] == 'd' || format[i] == 'i')
			{
				iarg = va_arg(args, int);
				_putchar(iarg);
				num++;
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
