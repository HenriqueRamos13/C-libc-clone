#include "libft.h"

char	*ft_strjoin(const char *s1, const char *s2)
{
	char	*str;
	size_t	count;
	size_t	len;

	len = ft_strlen(s1) + ft_strlen(s2) + 1;
	if (!(str = ft_calloc(len, sizeof(char))))
		return (NULL);
	count = 0;
	while (*s1 != '\0')
		str[count++] = *(s1++);
	while (*s2 != '\0')
		str[count++] = *(s2++);
	str[count] = '\0';
	return (str);
}
