// Copy and catenate the input string into a destination string.

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t		i;
	const char	*ini_src;

	ini_src = src;
	i = 0;
	if (size == 0)
	{
		return (ft_strlen(src));
	}
	while (*src && i < size -1)
	{
		*dest = *src;
		dest++;
		src++;
		i++;
	}
	*dest = '\0';
	return (i + ft_strlen(src));
}
