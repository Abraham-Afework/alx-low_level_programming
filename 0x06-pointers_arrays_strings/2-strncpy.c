#include"main.h"
/**
* _strncpy - copies one strimg tthe other string
* Description - two string will be concatenated src with dest with n byte
*@dest: the pointer variable passed
*@src: the pointer variable passed
*@n:t the number of byte
*Return: dest
*/
char *_strncpy(char *dest, char *src, int n)
{
	char *temp_src,*temp_dest;

	temp_src =src;
	temp_dest =dest;

	while (n > 0)
	{
		*temp_dest++ = *temp_src++;
		n--;
	}
	return(dest);
}

