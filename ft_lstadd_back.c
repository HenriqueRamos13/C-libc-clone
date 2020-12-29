#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*actual;

	if (new && lst)
	{
		actual = *lst;
		if (actual == NULL)
			*lst = new;
		else
		{
			while (actual->next != NULL)
				actual = actual->next;
			actual->next = new;
		}
	}
}
