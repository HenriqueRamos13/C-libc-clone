/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hramos <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/12 12:16:04 by hramos            #+#    #+#             */
/*   Updated: 2021/02/12 12:16:05 by hramos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dest_len;
	size_t	aux;
	size_t	src_len;

	dest_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	if (dstsize <= dest_len)
		src_len += dstsize;
	else
		src_len += dest_len;
	aux = 0;
	while (src[aux] && (dest_len + 1) < dstsize)
		dst[dest_len++] = src[aux++];
	dst[dest_len] = '\0';
	return (src_len);
}
