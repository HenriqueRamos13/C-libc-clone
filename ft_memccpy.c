#include "libft.h"

void	*ft_memccpy(void *str1, const void *str2, int c, size_t n)
{
	unsigned char	*dest;
	unsigned char	*src;

	dest = (unsigned char *)str1;
	src = (unsigned char *)str2;
	while (n != 0)
	{
		*(dest++) = *(src);
		if (*(src++) == (unsigned char)c)
			return (dest);
		n--;
	}
	return (NULL);
}
