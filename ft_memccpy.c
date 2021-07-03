/*
* Created: 2020/05/21
*/

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t len)
{
	int				ch;
	size_t			n;
	unsigned char	*str;
	unsigned char	*s;

	ch = (unsigned char)c;
	n = 0;
	s = (unsigned char *)src;
	str = (unsigned char *)dest;
	if (str == NULL && s == NULL && len != 0)
		return (NULL);
	while (len > n)
	{
		str[n] = s[n];
		if (s[n] == (unsigned char)ch)
			return (str + n + 1);
		n++;
	}
	return (NULL);
}
