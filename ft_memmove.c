/* copies n bytes from memory area src to
memory area dest.  The memory areas may overlap: copying takes
place as though the bytes in src are first copied into a temporary
array that does not overlap src or dest, and the bytes are then
copied from the temporary array to dest. */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*dest_t;
	unsigned char	*src_t;
	size_t			i;

	dest_t = (unsigned char *)dest;
	src_t = (unsigned char *)src;
	i = 0;
	if (dest < src)
	{
		while (i < n)
		{
			dest_t[i] = src_t[i];
			i++;
		}
	}
	else
	{
		while (n > 0)
		{
			n--;
			dest_t[n] = src_t[n];
		}
	}
	return (dest);
}
