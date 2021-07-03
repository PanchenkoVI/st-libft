/*
* Created: 2020/05/21
*/

#include "libft.h"

void	*ft_memset(void *dest, int c, size_t len)
{
	unsigned char	*str;
	unsigned char	ch;
	size_t			n;

	n = 0;
	str = (unsigned char *)dest;
	ch = (unsigned char)c;
	while (len > n)
	{
		*(str++) = ch;
		n++;
	}
	return (dest);
}
