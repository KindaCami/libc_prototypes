//This func erases the data in n bytes implementig ft_memset

#include "libft.h"
void	ft_bzero(void *s, size_t n)
{
    unsigned char    *p;

    p = (unsigned char *)s;
    while (n--)
    {
        *p++ = '\0';
    }
}