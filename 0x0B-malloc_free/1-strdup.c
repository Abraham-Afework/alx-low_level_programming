#include"main.h"
#include<stdlib.h>
/*
 * strdup -
 *
 * @str:
 *
 *
 */
char *_strdup(char *str)
{
	int i,size;
	char *temp_s;
	
	if (*str == '\0' )
	{
		return NULL;
	}
	if (*str != '\0')
	{
		size = 0;
		temp_s = str;
		
		while (*temp_s++ != '\0')
		{
			size++;
		}
	}
	 temp_s = (char *) malloc(size * sizeof(char) + 1);
	 i = 0;

	if ( temp_s == NULL)
	{
		return NULL;
	}
	while (i < size)
		{
			temp_s[i] = str[i];
			 i++;

		}
	temp_s[i + 1] = '\0';
	return (temp_s);
}
