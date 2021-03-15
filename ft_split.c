/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hramos <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/12 12:15:04 by hramos            #+#    #+#             */
/*   Updated: 2021/02/12 12:15:05 by hramos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*malloc_array(const char *s, char c)
{
	char	**arr;
	size_t	size;
	size_t	ct;
	size_t	s_sz;

	s_sz = 0;
	ct = 0;
	size = 0;
	while (s[ct] != '\0')
	{
		if (s[ct] != c && s_sz == 0)
		{
			size++;
			s_sz++;
		}
		else if (s_sz > 0 && !(s[ct] != c))
			s_sz = 0;
		ct++;
	}
	if (!(arr = ft_calloc(size + 1, sizeof(char *))))
		return (NULL);
	return (arr);
}

void	*malloc_elements_array(char **arr, const char *s, char c)
{
	size_t	count;
	size_t	size;
	size_t	index;

	index = 0;
	count = 0;
	size = 0;
	while (s[count] != '\0')
	{
		if (s[count] != c)
		{
			size = 0;
			while (s[count++] != c)
				size++;
			arr[index] = ft_calloc(size + 1, sizeof(char));
			index++;
		}
		else
			count++;
	}
	arr[index] = 0;
	return (arr);
}

void	fill_array(char **arr, const char *s, char c)
{
	size_t	index;
	size_t	j;
	size_t	str_size;

	str_size = 0;
	index = 0;
	j = 0;
	while (*s != '\0')
	{
		if ((int)*s == (int)c && str_size > 0)
		{
			arr[index++][j] = '\0';
			str_size = 0;
			j = 0;
		}
		else if (!(*s == c))
		{
			arr[index][j++] = *s;
			if ((int)*(s + 1) == 0)
				arr[index][j] = '\0';
			str_size++;
		}
		s++;
	}
}

char	**ft_split(const char *s, char c)
{
	char	**arr;

	if (s == NULL)
		return (NULL);
	if (!(arr = malloc_array(s, c)))
		return (NULL);
	if (!(arr = malloc_elements_array(arr, s, c)))
		return (NULL);
	fill_array(arr, s, c);
	return (arr);
}
