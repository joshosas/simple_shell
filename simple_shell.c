#include "shell.h"

/**
 * sig_handler - checks if Ctrl+C is pressed
 * @sig_num: int par
 */
void sig_handler(int sig_num)
{
	if (sig_num == SIGINT)
	{
		_puts("\n$ ");
	}
}

/**
* _EOF - function handles the 'End of File'
* @len: return value of getline function
* @buff: buffer pointer
 */
void _EOF(int len, char *buff)
{
	(void)buff;
	if (len == -1)
	{
		if (isatty(STDIN_FILENO))
		{
			_puts("\n");
			free(buff);
		}
		exit(0);
	}
}
/**
  * _isatty - verifies if terminal is running
  */

void _isatty(void)
{
	if (isatty(STDIN_FILENO))
		_puts("$ ");
}
