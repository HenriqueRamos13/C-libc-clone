#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*pointer;
	size_t	len;
	size_t	counter;

	len = ft_strlen(s1);
	if (!(pointer = malloc(sizeof(char) * (len + 1))))
		return (NULL);
	counter = 0;
	while (s1[counter] != '\0')
	{
		pointer[counter] = s1[counter];
		counter++;
	}
	pointer[counter] = '\0';
	return (pointer);
}
