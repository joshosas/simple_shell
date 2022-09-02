#include <stdio.h>

/**
 * add - add integers
 * @a: first integer
 * @b: second integer
 * Return: On success 0
 */

int add(int a, int b)
{
	int c;

	c = a + b;

	return (c);
}

/**
 * main - Runs the addition function and shows the output
 *
 * Return: On success 0
 */

int main(void)
{
	int x = 5;
	int y = 2;
	int result;

	result = add(x, y);

	printf("%d", result);

	return (0);
}
