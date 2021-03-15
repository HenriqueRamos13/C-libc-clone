/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hramos <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/12 12:12:45 by hramos            #+#    #+#             */
/*   Updated: 2021/02/12 12:12:46 by hramos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	size_t	size;
	t_list	*actual;

	if (!lst)
		return (0);
	size = 1;
	actual = lst;
	while (actual->next != NULL)
	{
		size++;
		actual = actual->next;
	}
	return (size);
}
