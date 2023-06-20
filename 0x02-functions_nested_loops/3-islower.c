#include <ctype.h>
#include "main.h"

/**
 * _islower - Check if a character is lowercase.
 * @c is the char to be checker
 * Return: 0 if char is lwoercase, otherwise 0.
 */

int _islower(int c)
{
if (islower(c) == 0)
return (0);
else
return (1);
}
