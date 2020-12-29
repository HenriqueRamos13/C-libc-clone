#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*actual;

	if (!lst)
		return (NULL);
	actual = lst;
	while (actual->next != NULL)
		actual = actual->next;
	return (actual);
}
