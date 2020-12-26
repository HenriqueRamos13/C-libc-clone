#include "libft.h"

void	*ft_memchr(void *s, int c, size_t n)
{
	unsigned char	*i_str;

	i_str = (unsigned char *)s;
	while (n != 0)
	{
		if (*i_str == (unsigned char)c)
			return (i_str);
		i_str++;
		n--;
	}
	return (NULL);
}
