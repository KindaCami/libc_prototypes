//Calloc initializes the entire allocated memory block to zero (with bits set to 0).

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t	total_size;
	void	*memory_ptr;

	if (size != 0 && nmemb > ((size_t)-1 / size))
	{
		return (NULL);
	}
	total_size = nmemb * size;
	memory_ptr = malloc(total_size);
	if (memory_ptr == NULL)
		return (NULL);
	ft_bzero(memory_ptr, total_size);
		return (memory_ptr);
}
