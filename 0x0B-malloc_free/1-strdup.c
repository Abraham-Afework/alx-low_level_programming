#include"main.h"
#include<stdlib.h>
/**
 *_strdup - creates an array of chars, and initializes it with a specific char.
 *
 *@str:the input string
 *
 * Return:pointer to the duplicated string. NULL if no sufficent memory
 *
 */
char *_strdup(char *str)
{
	int i, size;
	char *temp_s;

	size = 0;
	temp_s = str;

	if (str == NULL)
	{
		return (NULL);
	}
	if (*str != '\0')
	{
		while (*temp_s++ != '\0')
		{
			size++;
		}
	}
	 temp_s = (char *) malloc(size * sizeof(char) + 1);
	 i = 0;

	if (temp_s == NULL)
	{
		return (NULL);
	}
	while (i < size)
	{
		temp_s[i] = str[i];
		i++;
	}
	temp_s[i + 1] = '\0';
	return (temp_s);
}
