/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hramos <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/12 12:13:06 by hramos            #+#    #+#             */
/*   Updated: 2021/02/12 12:13:07 by hramos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(void *s, int c, size_t n)
{
	unsigned char	*i_str;

	i_str = (unsigned char *)s;
	while (n != 0)
	{
		if (*i_str == (unsigned char)c)
			return (i_str);
		i_str++;
		n--;
	}
	return (NULL);
}
