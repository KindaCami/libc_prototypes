/*  locates the first occurrence of the null-terminated string s2 in the string s1,
where not more than n bytes are searched. */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	const char	*t_big;
	const char	*t_little;
	size_t		i;

	if (!*little)
		return ((char *)big);
	while (len > 0 && *big)
	{
		if (*big == *little)
		{
			t_big = big;
			t_little = little;
			i = len;
			while (*t_big == *t_little && *t_big && i-- > 0)
			{
				t_big++;
				t_little++;
			}
			if (!*t_little)
				return ((char *)big);
		}
		len--;
		big++;
	}
	return (NULL);
}
