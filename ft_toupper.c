// Coverts lowers chars to upper

#include "libft.h"

int	ft_toupper(int c)
{
	if (c <= 122 && c >= 97)
	{
		c -= 32;
	}
	return (c);
}
