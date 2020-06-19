#include <unistd.h>
#include <stdio.h>

int		ft_strlen(char *str)
{
	int count;
	count = 0;
	while (*str)
	{
		count++;
		str++;
	}
	return (count);
}

char	*ft_strrev(char *str)
{
	int		count;
	int		len;
	char	temp;
	len = 0;
	count = ft_strlen(str);
	while (len < count)
	{
		temp = str[len];
		str[len] = str[count-1];
		str[count-1] = temp;
		len++;
		count--;
	}
	return (str);
}


