/**
* swap_int - uses for swapping of two nums
* Description - receives the address of a and b and swap their values
*@a: the address of a
*@b: the address of b
*/
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
