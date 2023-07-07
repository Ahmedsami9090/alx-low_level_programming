#include "main.h"

/**
 * _islower - check if the letter is lowercase or else
 *
 * Description: a program that check lowercase letters
 *
 * @c: check input of function
 *
 * Return: 1 if true or 0 if incorrect
*/

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	return (0);
}
