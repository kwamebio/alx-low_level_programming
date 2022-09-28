#include "main.h"

/**
 * power_operation - returns the natural square root of a number.
 * @n: input number.
 * @c: iterator.
 * Return: square root or -1.
 */
int power_operation(int n, int c)
{
	if (c % (n / c) == 0)
	{
		if (c * (n / c) == n)
			return (c);
		else
			return (-1);
	}
	return (0 + power_operation(n, c + 1));
}
/**
 * _sqrt_recursion - returns the natural square root of a number.
 * @n: input number.
 * Return: natural square root.
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (0);
	if (n == 1)
		return (1);
	return (power_operation(n, 2));
}
{
	if (n == 1)		/*sqrt(1) == 1*/
		return (1);
	else if (n == 0)	/*sqrt(0) == 0*/
		return (0);
	else if (n < 0)		/*sqrt(-n) == -1 (NA)*/
		return (-1);
	else
		return (_sqrt_recursion_wrapper(n, 1, n));
}
