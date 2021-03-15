/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hramos <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/12 12:17:37 by hramos            #+#    #+#             */
/*   Updated: 2021/02/12 12:17:38 by hramos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	len;
	char	*i_str;

	i_str = (char *)s;
	len = ft_strlen(s);
	while (*i_str != '\0')
		i_str++;
	while ((len + 1) != 0)
	{
		if (*i_str == c)
			return (i_str);
		i_str--;
		len--;
	}
	return (NULL);
}
