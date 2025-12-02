//This func reverses the string using swap & pointers
#include "libft.h"

void	ft_strrev(char *str)
{
    char	*start;
    char	*end;
    char	temp;
    
    if (!str || !*str)
        return;
    
    start = str;
    end = str;
    while (*end)
        end++;
    end--;
    while (start < end)
    {
        temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }
}
