/*
* Created: 2020/05/21
*/

#include "libft.h"

char	*ft_strchr(const char *str, int ch)
{
	while (*str != 0)
	{
		if (ch == *str)
			return ((char *)str);
		str++;
	}
	if (ch == '\0')
		return ((char *)str);
	return (NULL);
}
