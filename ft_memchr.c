// scans the initial n bytes of the memory area
//pointed to by s for the first instance of c

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*temp;

	temp = (const unsigned char *)s;
	while (n-- > 0)
	{
		if ((unsigned char)c == *temp)
			return ((void *)temp);
		temp++;
	}
	return (NULL);
}
