/*
* Created: 2020/05/21
*/

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*elm;
	t_list	*next;

	if (!lst || !del)
		return ;
	elm = *lst;
	while (elm)
	{
		next = elm->next;
		del(elm->content);
		free(elm);
		elm = next;
	}
	*lst = NULL;
}
