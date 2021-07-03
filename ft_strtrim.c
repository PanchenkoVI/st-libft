/*
* Created: 2020/05/21
*/

#include "libft.h"

static char	*ft_character(const char *set, int s1)
{
	while (*set)
	{
		if (s1 == *set)
			return ((char *)set);
		set++;
	}
	if (*set && s1)
		return ((char *)set);
	return (NULL);
}

char		*ft_strtrim(char const *s1, char const *set)
{
	size_t	len;
	char	*spr;
	size_t	n;

	if (!s1)
		return (NULL);
	if (!set)
		return (NULL);
	n = 0;
	while (ft_character(set, *s1) != NULL && *s1 != '\0')
		s1++;
	len = ft_strlen(s1);
	while (ft_character(set, s1[len - 1]) != NULL && len > n)
		len--;
	spr = ft_substr((char *)s1, n, len);
	if (!spr)
		return (NULL);
	return (spr);
}
