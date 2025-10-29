#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	char	*trims;

	if (!s1)
		return (NULL);
	if (!set)
		return (ft_strdup(s1));
	end = ft_strlen(s1);
	start = 0;
	while (s1[start] && ft_strchr(set, s1[start]) != NULL)
	{
		start++;
	}
	while (end > start && ft_strchr(set, s1[end - 1]) != NULL)
	{
		end--;
	}
	trims = ft_substr(s1, start, (end - start));
	if (!trims)
		return (NULL);
	return (trims);
}
