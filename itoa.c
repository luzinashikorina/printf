#include "main.h"

/*
 * reverse - reverse string s in place
 * @s: the string
 * Return: nothing
 */
void reverse(char s[])
{
	int i, j;
	char c;

	for (i = 0, j = _len(s) - 1; i < j; i++, j--)
	{
		c = s[i];
		s[i] = s[j];
		s[j] = c;
	}
}

/**
 * itoa - converts int to string
 * @n: the int
 * @s: the buffer of the receiving str
 * Return: nothing
 */
void itoa(int n, char s[])
{
	int i = 0;
	int sign = 0;

	if (n < 0)
	{
		sign = -1;
		n *= -1;
	}
	do {
		s[i++] = n % 10 + '0';
	} while ((n /= 10) > 0);
	if (sign < 0)
		s[i++] = '-';
	s[i] = '\0';
	reverse(s);
}
