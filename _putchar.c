#include <unistd.h>

/**
 * _putchar - prints a character to stdout
 * @c: the character 
 * Return: 1 if successful, -1 otherwise
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
