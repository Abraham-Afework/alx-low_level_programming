#include "main.h"
/**
 * _strchr - finds if char occurs in string
 *
 * @s: string to check
 * @c: character to find in s
 *
 * Return: s the pointer after the instance of char
 */

char *_strchr(char *s, char c)
{
	while (*s++ != '\0')
	{
		if (*s == c)
		{
			break;
		}
	}
	return (s);
}
