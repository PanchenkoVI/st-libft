/*
* Created: 2020/05/21
*/

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	unsigned int	ch;
	char			c;

	c = 0;
	if (n < 0)
	{
		write(fd, "-", 1);
		ch = -n;
	}
	else
		ch = n;
	if (ch >= 10)
		ft_putnbr_fd(ch / 10, fd);
	c = (ch % 10) + 48;
	write(fd, &c, 1);
}
