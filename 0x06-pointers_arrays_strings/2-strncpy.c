#include"main.h"
/**
* _strncpy - copies one string tthe other string
* Description - two string will be concatenated src with dest with n byte
*@dest: the pointer variable passed
*@src: the pointer variable passed
*@n:t the number of byte
*Return: dest
*/
char *_strncpy(char *dest, char *src, int n)
{
	char *temp_src;
	int i;

	i = 0;
	temp_src = src;

	while (i < n && temp_src[i] != '\0')
	{
		dest[i] = temp_src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
