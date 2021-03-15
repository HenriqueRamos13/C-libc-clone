/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hramos <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/12 12:16:10 by hramos            #+#    #+#             */
/*   Updated: 2021/02/12 12:16:12 by hramos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	aux;

	if (dst == NULL || src == NULL)
		return (0);
	aux = 0;
	if (dstsize == 0)
	{
		while (src[aux])
			aux++;
		return (aux);
	}
	while (aux < dstsize - 1 && src[aux] != '\0')
	{
		dst[aux] = src[aux];
		aux++;
	}
	if (aux < dstsize)
		dst[aux] = '\0';
	while (src[aux] != '\0')
		aux++;
	return (aux);
}
