//Fill the first n bytes of the memory area pointed to by s with constant byte c

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*temp_s;

	temp_s = (unsigned char *)s;
	while (n--)
	{
		*temp_s++ = (unsigned char)c;
	}
	return (s);
}
