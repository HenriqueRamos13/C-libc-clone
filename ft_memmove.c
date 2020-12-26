#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*i_dest;
	unsigned char	*i_src;

	if (dst == NULL && src == NULL)
		return (NULL);

	i_dest = (unsigned char *)dst;
	i_src = (unsigned char *)src;
	if (dst > src)
		while (len-- > 0)
			i_dest[len] = i_src[len];
	else
		while (len-- != 0)
			*(i_dest++) = *(i_src++);
	return (dst);
}
