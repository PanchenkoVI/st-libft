/*
* Created: 2020/05/21
*/

#include "libft.h"

int		ft_memcmp(const void *arr1, const void *arr2, size_t len)
{
	unsigned char	*str1;
	unsigned char	*str2;
	size_t			ind;

	ind = 0;
	str1 = (unsigned char *)arr1;
	str2 = (unsigned char *)arr2;
	while (len > ind)
	{
		if (str1[ind] != str2[ind])
			return (str1[ind] - str2[ind]);
		ind++;
	}
	return (0);
}
