/**
*_strlen - outputs the length of a string
*Description - receives the address of char and tries to count the length
*@s: the address of the first char str
*Return: the length of the string.
*/
int _strlen(char *s)
{
	int count;

	count = 0;

	while (*s != '\0')
	{
		count++;
		s = s + 1;
	}
	return (count);

}

