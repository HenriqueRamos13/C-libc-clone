/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hramos <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/12 12:11:49 by hramos            #+#    #+#             */
/*   Updated: 2021/02/12 12:11:50 by hramos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
