#include"main.h"
/**
* _strcmp - compares two strings
* Description - two string will be compared
*@s1: string
*@s2: string
Return: dest
*/
int _strcmp(char *s1, char *s2)
{
	while(*s1==*s2)
	{
		if(*s1=='\0')
		{
			return 0;
		}
		s1++,s2++;
	}
	return *s1-*s2;
}
    
