/*
* Created: 2020/05/21
*/

#include "libft.h"

void	ft_bzero(void *str, size_t len)
{
	unsigned char	*ptr;

	ptr = (unsigned char *)str;
	while (len)
	{
		*ptr++ = '\0';
		len--;
	}
}
