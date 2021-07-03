/*
* Created: 2020/05/21
*/

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	t_list *cell;

	if (lst && new)
	{
		cell = new;
		cell->next = *lst;
		*lst = cell;
	}
}
