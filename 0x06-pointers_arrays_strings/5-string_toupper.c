/**
 *string_toupper - changes strings to upper case
 *
 * @upper:string to be changed to uppercase
 *
 * Return:upper
 *
 */
char *string_toupper(char *upper)
{
	char *temp;

	temp = upper;

	while (*temp != '\0')
	{
		if (*temp >= 'a' && *temp <= 'z')
		{
			*temp = *temp - 32;
		}
		temp = temp + 1;
	}
	return (upper);
}
