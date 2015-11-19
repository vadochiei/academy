#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(t_list *elem))
{
	t_list *list;

	while (lst)
	{
		list = lst->next;
		(*f)(lst);
		lst = list;
	}
}
