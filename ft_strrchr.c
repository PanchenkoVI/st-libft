/*
* Created: 2020/05/21
*/

#include "libft.h"

char	*ft_strrchr(const char *str, int ch)
{
	int	index;

	index = 0;
	while (str[index] != '\0')
		index++;
	while (index >= 0)
	{
		if (str[index] == ch)
			return ((char *)(str) + index);
		index--;
	}
	return (NULL);
}
