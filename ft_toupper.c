/*
* Created: 2020/05/21
*/

int		ft_toupper(int n)
{
	if (n >= 97 && n <= 122)
		n -= 32;
	return (n);
}
