/*
* Created: 2020/05/21
*/

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*str;
	int		n;

	n = 0;
	while (s1[n] != '\0')
		n++;
	str = (char *)malloc(sizeof(char) * (n + 1));
	if (!str)
		return (NULL);
	n = 0;
	while (s1[n])
	{
		str[n] = s1[n];
		n++;
	}
	str[n] = '\0';
	return (str);
}
