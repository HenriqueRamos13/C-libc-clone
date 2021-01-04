#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list *i_list;

	if (lst)
	{
		while (*lst)
		{
			i_list = (*lst)->next;
			ft_lstdelone(*lst, del);
			*lst = i_list;
		}
	}
	lst = NULL;
}
