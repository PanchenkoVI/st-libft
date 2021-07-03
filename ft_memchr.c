/*
* Created: 2020/05/21
*/

#include "libft.h"

void	*ft_memchr(const void *arr, int c, size_t len)
{
	unsigned char	*str;
	unsigned char	ch;
	size_t			n;

	str = (unsigned char *)arr;
	ch = (unsigned char)c;
	n = 0;
	while (len > n)
	{
		if (*(str) == ch)
			return (str);
		str++;
		n++;
	}
	return (NULL);
}
