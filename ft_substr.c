#include "libft.h"

void	*ft_substr(const char *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	size;

	if (s == NULL)
		return (NULL);
	if (start >= ft_strlen(s))
	{
		if (!(str = malloc(sizeof(char) * 1)))
			return (NULL);
		str[0] = '\0';
		return (str);
	}
	size = 0;
	while (s[start + size] != '\0' && size < len)
		size++;
	if (!(str = malloc(sizeof(char) * (size + 1))))
		return (NULL);
	size = -1;
	while (s[start + ++size] != '\0' && size < len)
		str[size] = s[start + (size)];
	str[size] = '\0';
	return (str);
}
