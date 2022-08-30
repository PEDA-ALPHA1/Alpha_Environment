#include <stdio.h>
/**
 *
 *
 * **/
int main(int ac __attribute__((unused)), char **av)
{
	int x = 0;
	
	while (x < ac)
	{
		printf("%s\n", av[x]);
		x++;
	}
	return (0);
}
