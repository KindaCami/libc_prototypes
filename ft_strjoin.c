#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	totalen;
	char	*s3;

	if (!s1 || !s2)
		return (NULL);
	totalen = ft_strlen(s1) + ft_strlen(s2) + 1;
	s3 = malloc(totalen);
	if (!s3)
		return (NULL);
	ft_strlcpy(s3, s1, totalen);
	ft_strlcat(s3, s2, totalen);
	return (s3);
}
