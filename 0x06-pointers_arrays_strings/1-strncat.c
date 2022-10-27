#include"main.h"
/**
* _strncat - concatenates two strings
* Description - two string will be concatenated src with dest with n byte
*@dest: the pointer variable passed
*@src: the pointer variable passed
*@n:t the number of byte
*Return: dest
*/
char *_strncat(char *dest, char *src, int n)
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
	while (n > 0)
	{
		if (*temp_src != '\0')
		{
			*(dest + length) = *temp_src;
			temp_src++;
			length++;
		}
		n--;
	}
	return (dest);
}
