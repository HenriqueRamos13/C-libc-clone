#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;
	t_list	*temp;

	if (lst == NULL || f == NULL)
		return (NULL);
	new = NULL;
	while (lst)
	{
		if (del)
		{
			ft_lstclear(&lst, del);
			return (NULL);
		}
		else
		{
			temp = ft_lstnew(f(lst->content));
			ft_lstadd_back(&new, temp);
		}
		lst = lst->next;
	}
	return (new);
}
