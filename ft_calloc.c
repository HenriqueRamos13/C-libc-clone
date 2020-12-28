#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char *pointer;

	if (!(pointer = malloc(count * size)))
		return (NULL);
	ft_bzero(pointer, count * size);
	return ((char *)pointer);
}
