/* shall locate the last occurrence of c
(converted to a char) in the string pointed to by s.  The
terminating NUL character is considered to be part of the string. */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	const char	*last;

	last = s;
	while (*last)
	{
		last++;
	}
	while (s < last && *last != (char)c)
	{
		last--;
	}
	if (*last == (char)c)
	{
		return ((char *)last);
	}
	else
	{
		return (NULL);
	}
}
