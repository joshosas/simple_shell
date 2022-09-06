#include "shell.h"

/**
 * exitt - function exits the shell with/without a return of status
 * @arv: array of words
 */
void exitt(char **arv)
{
	int i, n;

	if (arv[1])
	{
		n = _atoi(arv[1]);
		if (n <= -1)
			n = 2;
		freearv(arv);
		exit(n);
	}
	for (i = 0; arv[i]; i++)
		free(arv[i]);
	free(arv);
	exit(0);
}

/**
 * _atoi - function converts string to integer
 *@s: pointer par
 *Return: int
 */
int _atoi(char *s)
{
	int i, integer, sign = 1;

	i = 0;
	integer = 0;
	while (!((s[i] >= '0') && (s[i] <= '9')) && (s[i] != '\0'))
	{
		if (s[i] == '-')
		{
			sign = sign * (-1);
		}
		i++;
	}
	while ((s[i] >= '0') && (s[i] <= '9'))
	{
		integer = (integer * 10) + (sign * (s[i] - '0'));
		i++;
	}
	return (integer);
}

/**
 * env - functio prints current environment
 * @arv: array of args
 */
void env(char **arv __attribute__ ((unused)))
{

	int i;

	for (i = 0; environ[i]; i++)
	{
		_puts(environ[i]);
		_puts("\n");
	}

}
