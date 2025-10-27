/* The memcmp() function compares the first n bytes (each interpreted
as unsigned char) of the memory areas s1 and s2. */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*t1;
	const unsigned char	*t2;

	t1 = (const unsigned char *)s1;
	t2 = (const unsigned char *)s2;
	while (n-- > 0)
	{
		if (*t1 != *t2)
		{
			return (*t1 - *t2);
		}
		t1++;
		t2++;
	}
	return (0);
}
