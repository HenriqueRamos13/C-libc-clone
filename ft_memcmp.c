#include "libft.h"

int	ft_memcmp(void *s1, const void *s2, size_t n)
{
	unsigned char	*str1;
	unsigned char	*str2;
	int		diff;

	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	while (n-- != 0)
	{
		diff = *(str1++) - *(str2++);
		if (diff != 0)
			return (diff);
	}
	return (0);
}
