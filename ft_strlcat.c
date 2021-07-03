/*
* Created: 2020/05/21
*/

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	dt;
	size_t	sc;
	size_t	i;
	size_t	m;
	size_t	n;

	n = size;
	i = 0;
	dt = ft_strlen(dest);
	sc = ft_strlen(src);
	if (n != 0)
		n--;
	else
		return (sc);
	if (dt >= size)
		return (sc + size);
	m = dt;
	while (src[i] != '\0' && m < n)
	{
		dest[m] = src[i];
		m++;
		i++;
	}
	dest[m] = '\0';
	return (sc + dt);
}
