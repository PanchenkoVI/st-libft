/*
* Created: 2020/05/21
*/

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list *new;
	t_list *other;

	if (lst && (new = ft_lstnew(f(lst->content))))
	{
		other = new;
		lst = lst->next;
		while (lst)
		{
			if (!(other->next = ft_lstnew(f(lst->content))))
			{
				ft_lstclear(&new, del);
				return (NULL);
			}
			other = other->next;
			lst = lst->next;
		}
		other->next = NULL;
		return (new);
	}
	return (NULL);
}
