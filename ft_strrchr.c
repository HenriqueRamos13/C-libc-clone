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

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	int		pos_c;

	pos_c = -1;
	i = 0;
	while (s[i])
	{
		if (s[i] == (unsigned char)c)
			pos_c = i;
		i++;
	}
	if (c == '\0')
		return ((char *)s + i);
	if (pos_c == -1)
		return (NULL);
	return ((char *)s + pos_c);
}
