#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	*i_lst;

	if (lst)
	{
		i_lst = lst;
		while (i_lst)
		{
			f(i_lst->content);
			i_lst = i_lst->next;
		}
	}
}
