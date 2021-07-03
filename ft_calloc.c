/*
* Created: 2020/05/21
*/

#include "libft.h"

void	*ft_calloc(size_t str, size_t size)
{
	unsigned char	*ptr;
	size_t			n;

	n = size * str;
	if (!(ptr = (unsigned char *)malloc(n)))
		return (NULL);
	ft_memset(ptr, 0, n);
	return ((void *)ptr);
}
