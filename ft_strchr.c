/*  function returns a pointer to the first occurrence of
the character c in the string s. */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s != (char)c && *s)
	{
		s++;
	}
	if (*s != (char)c)
	{
		return (NULL);
	}
	else
	{
		return ((char *)s);
	}
}
