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
