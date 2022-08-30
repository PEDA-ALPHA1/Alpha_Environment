#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
/**
 *
 *
 *
 *
 * **/
int main(void)
{
	char *ptr = NULL;
	size_t n = 0;

	while (1)
	{
		write (2, "$ ", 2);
		getline(&ptr, &n, stdin);
		printf("%s\n", ptr);
	}
	free(ptr);
	/*exit(EXIT_SUCCESS);*/
	return (0);
}
