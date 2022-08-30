#include "main.h"
/**
 *
 *
 *
 *
 * **/
void print_alphabet_x10(void)
{
	int i = 0;
	char j;

	while (i < 10)
	{
		j = 'a';
		while (j <= 'z')
		{
			_putchar(j);
			j++;
		}
		i++;
		_putchar('\n');
	}
	_putchar('\n');
}
