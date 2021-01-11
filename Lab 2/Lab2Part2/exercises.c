/* SYSC 2006 Lab 2, Part 2.
 *
 * Incomplete implementations of the functions that will be coded during the lab. 
 */

#include <stdlib.h>
#include <math.h>

#include "exercises.h"

/* Returns n! for n >= 0. (0! is defined to be 1.)
   Note that the return type is int, and n! grows rapidly as n increases,
   so this function should only be used for fairly small values of n; 
   i.e., if ints are implemented as 32-bit values, n must be <= 15.
 */
int factorial(int n)
{
	int ans = 1;
	for (; n > 0; n--)
	{
		ans = ans * n;
	}

	return ans;

}

/* Returns the number of different ordered subsets of k objects picked
   from a set of n objects, for n > 0, k > 0, n >= k.
 */
int ordered_subsets(int n, int k)
{
	int fac = factorial(n);
	int fac2 = factorial(n - k);
	int ans = fac / (fac2);
	return ans;
}

/* Returns the binomial coefficient (n k); that is, the number of 
   combinations of k objects that can be chosen from a set of n objects, 
   for n > 0, k > 0, n >= k.
 */
int binomial(int n, int k)
{
	int fac = factorial(n);
	int fac2 = factorial(k);
	int fac3 = factorial(n - k);
	int ans = fac / (fac2 * fac3);
	return ans;
}

/* Returns the cosine of x (measured in radians) by calculating
 * the first n terms of the infinite series expansion of cosine.
 */
double cosine(double x, int n)
{
	return -2.0;
}

