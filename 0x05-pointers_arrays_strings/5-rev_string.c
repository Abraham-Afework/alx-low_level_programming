#include "main.h"

/**
  * rev_string - reverse a string.
  * @s: string to reverse
  */
void rev_string(char *s)
{
	int begin, temp;
	int finish = 0;

	while (*(s + finish) != '\0')
	{
		finish++;
	}

	finish -= 1;
	begin = 0;
	while (finish > begin)
	{
		temp = s[begin];
		s[begin] = s[finish];
		s[finish] = temp;
		begin++;
		finish--;
	}

}
