/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hramos <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/12 12:14:54 by hramos            #+#    #+#             */
/*   Updated: 2021/02/12 12:15:11 by hramos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	unsigned int	n_copy;

	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		n_copy = (unsigned int)(-n);
	}
	else
		n_copy = (unsigned int)n;
	if (n_copy >= 10)
		ft_putnbr_fd(n_copy / 10, fd);
	ft_putchar_fd((char)((n_copy % 10) + 48), fd);
}
