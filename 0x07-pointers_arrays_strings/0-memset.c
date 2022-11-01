/**
 * _memset - fills n bytes of memory
 *
 * @s: pointer to beginning of memory area
 * @b: constant byte to fill with
 * @n: num bytes to fill in
 *
 * Return: pointer to beginning of memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;
	char *begining = s;

	i = 0;

	while (i < n)
	{
		*s++ = b;
		i++;
	}
	return (begining);
}
