/**
 * cap_strin - capitalize each first letter of a string
 * @caps : string to be capitalized
 * return : caps
*/
char *cap_string(char *caps)
{
	char *temp_caps;
	int x;

	temp_caps = caps;
	int separators[] = {',', ';', '.', '?', '"', '(', ')', '{', '}', ' ', 10, };	

	while (*temp_caps != '\0')
	{
		 if('a' <= *caps && *caps <= 'z')
                {
                        *caps = *caps - 32;
                }
		for (x = 0; x <= 12; x++)
		{
			if (*temp_caps == separators[x])
			{	
				temp_caps = temp_caps + 1;
			}
		}
		if (*temp_caps >='a'&& *temp_caps <= 'z')
		{
			*temp_caps = *temp_caps - 32;
		}
		else 
		{
			continue;
		}
	temp_caps = temp_caps + 1;
	}
	return (caps);
}
