#include "main.h"
/**
 * binary_to_unit - converts a binary number to an unsigned int
 * @b: pointer to a string
 * Return: converted number
*/
unsigned int binary_to_unit(const char *b)
{
	unsigned int result = 0;

	if (!b)
		return (0);
	while (*b)
	{
		result <<= 1;
		if (*b == '1')
			result |= 1;
		else if (*b != '0')
			return (0);
		b++;
	}
	return (result);
}
