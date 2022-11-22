#include <unistd.h>

/**
 * _putstring - prints a string
 * @str: the string
 * Return: 1 if success, -1 otherwise
 */
int _putstring(char *str)
{
	int len;

	len = _len(str);
	return (write(1, str, len));
}
