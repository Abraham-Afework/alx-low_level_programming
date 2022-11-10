#include"main.h"
#include<stdlib.h>
/**
 *  string_nconcat - function that concatenates two strings.
 *
 * @s1:first string
 * @s2:second string to be concatenated
 * @n: n bytes of s2 to be concatenated
 *
 * Return: a pointer to char with allocated memory
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *combine;
	unsigned int i, count;

	count = 0;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	for (i = 0; s1[i]; i++)
	{
		count++;
	}

	combine = malloc(sizeof(char) * (count + n + 1));

	if (combine == NULL)
	{
		return (NULL);
	}
	for (i = 0; s1[i]; i++)
	{
		combine[i] = s1[i];
	}
	for (count = 0; count < n; count++)
	{
		combine[i++] = s2[count];
	}
	combine[i] = '\0';

	return (combine);
}
