/*
* Created: 2020/05/21
*/

int		ft_isalnum(int n)
{
	if (n >= 48 && n <= 57)
		return (1);
	if (n >= 65 && n <= 90)
		return (1);
	if (n >= 97 && n <= 122)
		return (1);
	else
		return (0);
}
