#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	slen;
	size_t	rlen;
	char	*sstr;
	char	*emptystr;

	if (!s)
		return (NULL);
	slen = ft_strlen(s);
	if (start >= slen)
	{
		emptystr = ft_calloc(1, 1);
		return (emptystr);
	}
	rlen = slen - start;
	if (rlen > len)
	{
		rlen = len;
	}
	sstr = malloc(rlen + 1);
	if (!sstr)
		return (NULL);
	ft_strlcpy(sstr, s + start, rlen + 1);
	return (sstr);
}
