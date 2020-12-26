#include "libft.h"

int	ft_isprint(int c)
{
	unsigned int	i_char;

	i_char = (unsigned int)c;
	if (i_char < 32 || i_char >= 127)
		return (0);
	else
		return (1);
}
