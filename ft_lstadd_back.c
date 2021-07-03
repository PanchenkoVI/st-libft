/*
* Created: 2020/05/21
*/

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*end;

	if (new != 0)
	{
		end = ft_lstlast(*lst);
		if (end != 0)
			end->next = new;
		else
			*lst = new;
		new->next = NULL;
	}
}
