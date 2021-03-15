/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hramos <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/12 12:07:31 by hramos            #+#    #+#             */
/*   Updated: 2021/02/12 12:07:40 by hramos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	is_space(char c)
{
	if (c == ' ' || c == '\n' || c == '\t' || c == '\v'
		|| c == '\f' || c == '\r')
		return (1);
	else
		return (0);
}

int	ft_atoi(const char *str)
{
	long	num;
	int		aux;

	aux = 0;
	num = 0;
	while (is_space(*str) == 1)
		str++;
	while (*str != '\0')
	{
		if ((*str == '-' || *str == '+') && aux == 0)
			aux = *str == '-' ? aux - 1 : aux + 1;
		else if (ft_isdigit(*str))
		{
			aux = aux == 0 ? 1 : aux;
			num = (num * 10) + (*str - 48);
		}
		else
			return ((int)(num * aux));
		str++;
	}
	return ((int)(num * aux));
}
