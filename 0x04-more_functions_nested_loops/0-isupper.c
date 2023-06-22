#include "main.h"

/**
 * _isupper - main entry
 *
 * @c: function input
 *
 * Return: 0 or 1
*/

int _isupper(int c)
{
	int retVal;

	if (c >= 65 && c <= 90)
		retVal = 1;
	if (c >= 97 && c <= 122)
		retVal = 0;

	return (retVal);
