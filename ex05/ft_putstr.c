#include <unistd.h>



void ft_putstr(char *str)
{
	while(*str)
	{
		ft_putchar(*str++);
	}
	ft_putchar('\n');
}

