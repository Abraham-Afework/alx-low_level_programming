#include"main.h"
#include<stdlib.h>
/**
 *str_concat-function that concatenates two strings.
 *
 * @s1:the input string
 * @s2: string to be concatenated to s1
 *
 * Return:pointer to the concatenated string. NULL if no sufficent memory
 *
 */
char *str_concat(char *s1, char *s2)
{
	int i, j, size;
	char *ptr;

	if (s1 == NULL)
	{
		s1 = "";
	}

	if (s2 == NULL)
	{
		s2 = "";
	}
	for (i = 0; s1[i] != '\0'; i++)
	{
	}
	for (j = 0; s2[j] != '\0'; j++)
	{
	}
	size = i + j + 1;
	ptr = (char *) malloc(size * sizeof(char));

	if (ptr == NULL)
		return (NULL);

	for (i = 0; s1[i] != '\0'; i++)
	{
		ptr[i] = s1[i];
	}
	for (j = 0; s2[j] != '\0'; j++)
	{
		ptr[i] = s2[j];
		i++;
	}
	return (ptr);
}
