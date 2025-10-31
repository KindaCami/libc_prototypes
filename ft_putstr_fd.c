#include "libft.h"
#include <unistd.h>

void	ft_putstr_fd(char *s, int fd)
{
	size_t	bytes;

	if (!s)
		return ;
	bytes = ft_strlen(s);
	write(fd, s, bytes);
}
