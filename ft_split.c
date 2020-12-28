#include "libft.h"

static	void	*malloc_array(const char *s, char c)
{
	char	**arr;
	size_t	size;
	size_t	count;
	size_t	str_size;

	str_size = 0;
	count = 0;
	size = 1;
	while (s[count] != '\0')
	{
		if (((int)s[count] == (int)c || count + 1 == ft_strlen(s)) && str_size > 0)
		{
			str_size = 0;
			size++;
		}
		else if (!((int)s[count] == (int)c))
			str_size++;
		count++;
	}
	if (!(arr = ft_calloc(size, sizeof(char *))))
		return (NULL);
	return (arr);
}

static	void	*malloc_elements_array(char **arr, const char *s, char c)
{
	size_t	count;
	size_t	size;
	size_t	index;

	index = 0;
	count = 0;
	size = 1;
	while (s[count] != '\0')
	{
		if (((int)s[count] == (int)c || count + 1 == ft_strlen(s)) && size > 1)
		{
			if (count + 1 == ft_strlen(s))
				size++;
			if (!(arr[index] = ft_calloc(size, sizeof(char))))
				return (NULL);	
			index++;
			size = 1;
			count++;
		}
		else
		{
			count++;
			size++;
		}
			
	}
	arr[index] = 0;
	return (arr);
}

static	void	fill_array(char **arr, const char *s, char c)
{
	size_t	index;
	size_t	j;
	size_t	str_size;

	str_size = 0;
	index = 0;
	j = 0;
	while (*s != '\0')
	{
		if ((int)*s == (int)c && str_size++ > 0)
		{
			arr[index][j] = '\0';
			str_size = 0;
			index++;
			j = 0;
		}
		else if (!(*s == c))
		{
			arr[index][j++] = *s;
			if (*(s + 1) == '\0')
			{
				arr[index][j] = '\0';
			}
		}
		s++;
	}
}

char	**ft_split(const char *s, char c)
{
	char	**arr;
	
	arr = malloc_array(s, c);
	malloc_elements_array(arr, s, c);
	fill_array(arr, s, c);
	return (arr);
}
