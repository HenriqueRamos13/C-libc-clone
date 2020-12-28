#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dest_len;
	size_t	aux;
	size_t	src_len;

	dest_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	if (dstsize <= dest_len)
		src_len += dstsize;
	else
		src_len += dest_len;
	aux = 0;
	while (src[aux] && (dest_len + 1) < dstsize)
		dst[dest_len++] = src[aux++];
	dst[dest_len] = '\0';
	return (src_len);
}
