#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 *
 *
 *
 * **/
int main(void)
{
	char s[] = "This is the way.";
	char d[] = " ";
	char *portion = strtok(s, d);

	while (portion != NULL)
	{
		printf("%s ", portion);
		portion = strtok(NULL, d);
	}
	putchar('\n');
	exit(EXIT_SUCCESS);
	return 0;
}
