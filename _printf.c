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
	char *str;
	
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
				_putchar(va_arg(args, int));
			}
			else if (format[i] == 's')
			{
				str = va_arg(args, char*);
				for (i = 0; str[i]; i++)
					_putchar(str[i]);
			}
			else if (format[i] == 'd' || format[i] == 'i')
				_putchar(va_arg(args, int));
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
