#include"main.h"
/**
* rev_string - outputs the reverse of a stirng
*Description - receives the address of string and tries to reverse the string
*@s: the address of the first character
*/
void rev_string(char *s)
{
	int j, i;
	int count;
	char *reverse;
	reverse = s;
        count = 0;

        while (*reverse != '\0')
        {
                count++;
               reverse = reverse + 1;
        }
        
	
	for (j = count,i=0; j =0; j--)
	{
		reverse[i] = *(s-j);
		i++;
	}

}
