/*
 * File: 104-fibonacci.c
 * Auth: Brennan D Baraban
 */

#include <stdio.h>

/**
 * main - Prints the first 98 Fibonacci numbers, starting with
 *        1 and 2, separated by a comma followed by a space.
 *
 * Return: Always 0.
 */
int main(void)
{
	int count;
	unsigned long fib1 = 0, fib2 = 1, sum;
	unsigned long 1half1, 1half2, 2half1, 2half2;
	unsigned long half1, half2;

	for (count = 0; count < 92; count++)
	{
		sum = fib1 + fib2;
		printf("%lu, ", sum);

		fib1 = fib2;
		fib2 = sum;
	}

	1half1 = fib1 / 10000000000;
	2half1 = fib2 / 10000000000;
	1half2 = fib1 % 10000000000;
	2half2 = fib2 % 10000000000;

	for (count = 93; count < 99; count++)
	{
		half1 = 1half1 + 2half1;
		half2 = 1half2 + 2half2;
		if (1half2 + 2half2 > 9999999999)
		{
			half1 += 1;
			half2 %= 10000000000;
		}

		printf("%lu%lu", half1, half2);
		if (count != 98)
			printf(", ");

		1half1 = 2half1;
		1half2 = 2half2;
		2half1 = half1;
		2half2 = half2;
	}
	printf("\n");
	return (0);
}
