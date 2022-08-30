#include <stdio.h>
#include <unistd.h>

/**
 * main - execve example
 *
 * Return: Always 0.
 */
int main(void)
{
	char cmd[] = "/usr/bin/ls";

	char *argv[] = {"ls", NULL};
	char *envp = {NULL};

	printf("Before execve\n");
	if (execve(cmd, argv, envp) == -1)
	{
		perror("Error");
	}







 /*   char *argv[] = {"/bin/ls", "-l", "/usr/", NULL};

    printf("Before execve\n");
    if (execve(argv[0], argv, NULL) == -1)
    {
        perror("Error:");
    }*/

    printf("After execve\n");
    return (0);
}
