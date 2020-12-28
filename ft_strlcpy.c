#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	aux;

	if (dst == NULL || src == NULL)
		return (0);
	aux = 0;
	if (dstsize == 0)
	{
		while (src[aux])
			aux++;
		return (aux);
	}
	while (aux < dstsize - 1 && src[aux] != '\0')
	{
		dst[aux] = src[aux];
		aux++;
	}
	if (aux < dstsize)
		dst[aux] = '\0';
	while (src[aux] != '\0')
		aux++;
	return (aux);
}
