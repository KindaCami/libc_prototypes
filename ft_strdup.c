// The name says everything "duplicate string"

#include "libft.h"
#include <stdio.h>

char    *ft_strdup(const char *s)
{
   char     *scpy;
    size_t    len;

    len = ft_strlen(s) + 1;
    scpy = malloc(len);
    if (!scpy)
    {
        return (NULL);
    }
    ft_strlcpy(scpy, s, len);
    return (scpy);
}