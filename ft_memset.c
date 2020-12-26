#include "libft.h"

void	*ft_memset(void *str, int c, size_t n)
{
	while (n > 0)
	{
		((unsigned char *)str)[(n--) - 1] = (unsigned char)c;
	}
	return (str);
}
