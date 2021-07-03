/*
* Created: 2020/05/21
*/

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!lst || !del)
		return ;
	if (lst->content && del)
		del(lst->content);
	free(lst);
}
