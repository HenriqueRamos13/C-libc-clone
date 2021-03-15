/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hramos <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/12 12:09:10 by hramos            #+#    #+#             */
/*   Updated: 2021/02/12 12:09:11 by hramos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
