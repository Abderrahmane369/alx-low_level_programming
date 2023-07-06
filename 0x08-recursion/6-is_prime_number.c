#include "main.h"

/**
 * i_is_prime_number - ezaa
 * @n: eza
 * @i: ez
 * Return: tur
 */

int i_is_prime_number(int n, int i)
{
if (i >= n)
return (1);

if (n % i == 0)
return (0);

return (i_is_prime_number(n, i + 1));
}

/**
 * is_prime_number - ezaa
 * @n: eza
 * Return: tur
 */

int is_prime_number(int n)
{
if (n < 0)
return (0);

if (n <= 1)
return (0);

return (i_is_prime_number(n, 2));

}
