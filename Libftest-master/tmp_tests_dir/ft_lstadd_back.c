/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hramos <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/12 12:11:25 by hramos            #+#    #+#             */
/*   Updated: 2021/02/12 12:11:26 by hramos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
