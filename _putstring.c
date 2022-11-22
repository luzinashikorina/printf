#include <unistd.h>
/**
 * _len - string of len
 * @str: the string
 * Return: the length of the string
 */
int _len(char *str)
{
	int len = 0;

	while (str[len] != '\0')
	{
		len++;
	}
	return (len);
}

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
