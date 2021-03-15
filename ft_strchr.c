/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hramos <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/12 12:15:46 by hramos            #+#    #+#             */
/*   Updated: 2021/02/12 12:15:47 by hramos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*i_str;

	i_str = (char *)s;
	while (1)
	{
		if (*i_str == c)
			return (i_str);
		else if (*i_str == '\0')
			return (NULL);
		i_str++;
	}
}
