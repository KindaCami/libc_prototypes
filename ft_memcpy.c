//This func copies n bytes from memory area src to memory area dest

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*dest_t;
	unsigned char	*src_t;
	size_t			i;

	dest_t = (unsigned char *)dest;
	src_t = (unsigned char *)src;
	i = 0;
	while (i < n)
	{
		*dest_t = *src_t;
		dest_t++;
		src_t++;
		i++;
	}
	return (dest);
}
