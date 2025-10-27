//function converts the initial portion of the string pointed to by nptr to int.

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int	result;
	int	digit;
	int	sign;

	sign = 1;
	result = 0;
	while (*nptr == ' ' || (*nptr >= '\t' && *nptr <= '\r'))
	{
		nptr++;
	}
	if (*nptr == '-' || *nptr == '+')
	{
		if (*nptr == '-')
		{
			sign = -1;
		}
		nptr++;
	}
	while (*nptr >= '0' && *nptr <= '9')
	{
		digit = *nptr - '0';
		result = (result * 10) + digit;
		nptr++;
	}
	return (result * sign);
}
