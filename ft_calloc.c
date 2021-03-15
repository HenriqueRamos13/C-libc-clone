/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hramos <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/12 12:07:57 by hramos            #+#    #+#             */
/*   Updated: 2021/03/15 15:52:39 by hramos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char *pointer;

	if (!(pointer = malloc(count * size)))
		return (NULL);
	ft_bzero(pointer, count * size);
	return ((char *)pointer);
}
