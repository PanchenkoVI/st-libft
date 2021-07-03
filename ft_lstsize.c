/*
* Created: 2020/05/21
*/

#include "libft.h"

int		ft_lstsize(t_list *lst)
{
	t_list	*size;
	int		cell;

	size = lst;
	cell = 0;
	while (size != 0)
	{
		size = size->next;
		cell++;
	}
	return (cell);
}
