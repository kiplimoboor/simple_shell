#include <stdlib.h>
#include <unistd.h>

/**
 * main - imitates the shell
 *
 * Return: (0) is success
 */

int main(void)
{
	char *shell = "/bin/sh";
	char *args[] = {"/bin/sh", NULL};
	char *env[] = {NULL};

	execve(shell, args, env);
	exit(EXIT_FAILURE);
}
