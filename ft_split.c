#include "libft.h"
/*Count words separated by c*/
static size_t	ft_count_words(char const *s, char c)
{
	size_t	words;

	words = 0;
	if (!s)
		return (0);
	while (*s)
	{
		while (*s && *s == c)
		{
			s++;
		}
		if (*s)
		{
			words++;
			while (*s && *s != c)
			{
				s++;
			}
		}
	}
	return (words);
}
/*Free memory in error cases*/

static void	*ft_free_split(char **split, size_t j)
{
	while (j-- > 0)
	{
		free(split[j]);
	}
	free(split);
	return (NULL);
}
/*extract nest word and move foward the original pointer*/

static char	*ft_next_word(char const **s_ptr, char c)
{
	const char	*start;
	char		*word;

	while (**s_ptr == c && **s_ptr)
	{
		(*s_ptr)++;
	}
	start = *s_ptr;
	while (**s_ptr != c && **s_ptr)
	{
		(*s_ptr)++;
	}
	word = ft_substr(start, 0, (*s_ptr - start));
	return (word);
}
/* split array 's' in words separated by 'c'*/

char	**ft_split(char const *s, char c)
{
	size_t		count;
	char		**split;
	size_t		i;

	if (!s)
		return (NULL);
	i = 0;
	count = ft_count_words(s, c);
	split = malloc(sizeof(char *) * (count + 1));
	if (!split)
		return (NULL);
	while (i < count)
	{
		split[i] = ft_next_word(&s, c);
		if (!split[i])
			return (ft_free_split(split, i));
		i++;
	}
	split[i] = NULL;
	return (split);
}
