#include "libft.h"

void	*malloc_and_fill(const char *s1, size_t start, size_t end)
{
	char	*str;
	size_t	count;

	if (ft_strlen(s1) == 0 || start >= ft_strlen(s1))
	{
		if (!(str = malloc(sizeof(char) * 1)))
			return (NULL);
		str[0] = '\0';
		return (str);
	}
	if (!(str = malloc(sizeof(char) * (end - start + 1))))
		return (NULL);
	count = 0;
	while (count <= (end - start))
	{
		str[count] = s1[start + count];
		count++;
	}
	str[count] = '\0';
	return (str);
}

int		is_in_set(char c, const char *set)
{
	size_t	count;

	count = 0;
	while (set[count] != '\0')
	{
		if ((int)set[count] == (int)c)
			return (1);
		count++;
	}
	return (0);
}

char	*ft_strtrim(const char *s1, const char *set)
{
	char	*str;
	size_t	count;
	size_t	start;
	size_t	end;

	if (s1 == NULL || set == NULL)
		return (NULL);
	count = 0;
	while (is_in_set(s1[count], set))
		count++;
	start = count;
	count = ft_strlen(s1) - 1;
	while (is_in_set(s1[count], set))
		count--;
	end = count;
	str = malloc_and_fill(s1, start, end);
	return (str);
}
