// calculates the length of the string pointed to

#include "libft.h"

int	ft_strlen(const char *str)
{
	int	len;

	len = 0;
	while (*str)
	{
		str++;
		len++;
	}
	return (len);
}
