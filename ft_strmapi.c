/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hramos <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/12 12:16:26 by hramos            #+#    #+#             */
/*   Updated: 2021/02/12 12:16:27 by hramos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(const char *s, char (*f)(unsigned int, char))
{
	char	*new_str;
	int		counter;

	if (s == NULL)
		return (NULL);
	if (!(new_str = ft_calloc(ft_strlen(s) + 1, sizeof(char))))
		return (NULL);
	counter = 0;
	while (s[counter] != '\0')
	{
		new_str[counter] = f(counter, s[counter]);
		counter++;
	}
	return (new_str);
}
