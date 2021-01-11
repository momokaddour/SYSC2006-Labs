#include "power.h"

/* SYSC 2006 Lab 2, Part 1 */

/* Raise x to the n'th power; n >= 0; x > 0 when n == 0. */

int power1(int x, int n)
{
	int product = x;
	for (; n > 1; n = n - 1)
	{
		product = product * x;
	}

	if (n == 0)
	{
		product = 1;
	}

	return product;
}

int power2(int x, int n)
{
	int product = x;
	for (; n > 1; n = n - 1)
	{
		product = product * x;
	}

	if (n == 0)
	{
		product = 1;
	}
	return product;
}

int power3(int x, int n)
{
	int product = x;
	for (; n > 1; n = n - 1)
	{
		product = product * x;
	}
	if (n == 0)
	{
		product = 1;
	}
	return product;
}

int power4(int x, int n)
{
	int product = x;
	for (; n > 1; n = n - 1)
	{
		product = product * x;
	}
	if (n == 0)
	{
		product = 1;
	}
	return product;
}
