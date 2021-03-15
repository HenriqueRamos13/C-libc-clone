/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hramos <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/15 15:51:52 by hramos            #+#    #+#             */
/*   Updated: 2021/03/15 15:52:23 by hramos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
