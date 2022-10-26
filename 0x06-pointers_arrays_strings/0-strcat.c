#include"main.h"
/**
* _strcat - concatenates two strings
* Description - two string will be concatenated src with dest
*@dest: the pointer variable passed
*@src: the pointer variable passed
*Return: dest
*/
char *_strcat(char *dest, char *src)
{
	int length;
	char *temp_dest, *temp_src;

	length = 0;
	temp_dest = dest;
	temp_src = src;

	while (*temp_dest != '\0')
	{
		length++;
		temp_dest++;
	}
	while (*temp_src != '\0')
	{
		*(dest + length) = *temp_src;
		length++;
		temp_src++;
	}
	return (dest);
}
