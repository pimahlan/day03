
#include <stdio.h>
int ft_atoi(char *str)
{
	int num;
	int sign;
	sign = 1;
	num =0;

	if(str[0] =='-')
	{
		sign = -1;
		str++;
	}
	while(*str)
	{
		num = num*10 + *str -'0';
		str++;
	}
	return(sign*num);
}


