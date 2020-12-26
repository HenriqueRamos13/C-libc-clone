#ifndef LIBFT_H
#define LIBFT_H

# include <unistd.h>
# include <stdlib.h>
# include <errno.h>
# include <string.h>
# include <fcntl.h>

void	*ft_memset(void *str, int c, size_t n);
void	ft_bzero(void *s, size_t n);
void	*ft_memccpy(void *str1, const void *str2, int c, size_t n);
void	*ft_memcpy(void *str1, const void *str2, size_t n);
int     ft_isalnum(int c);
int     ft_isdigit(int c);
int     ft_isalpha(int c);
int	ft_memcmp(void *s1, const void *s2, size_t n);
void	*ft_memmove(void *dst, const void *src, size_t len);
size_t	ft_strlen(const char *s);
void	*ft_memchr(void *s, int c, size_t n);
int     ft_isascii(int c);
int     ft_isprint(int c);
int     ft_isupper(int c);
int     ft_islower(int c);
int	ft_tolower(int c);
char    *ft_strchr(const char *s, int c);
char    *ft_strrchr(const char *s, int c);

#endif
