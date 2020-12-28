NAME	=	libft.a

SRCS	=	ft_memset.c ft_bzero.c ft_memcpy.c ft_memccpy.c ft_memmove.c ft_memchr.c ft_memcmp.c ft_strlen.c ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_toupper.c ft_islower.c ft_isupper.c ft_tolower.c ft_strchr.c ft_strrchr.c ft_strncmp.c ft_strlcpy.c ft_strlcat.c ft_strnstr.c ft_atoi.c ft_calloc.c ft_strdup.c ft_substr.c ft_strjoin.c ft_strtrim.c

INC	=	libft.h

OBJ	=	${SRCS:.c=.o}

CFLAGS	=	-Wall -Wextra -Werror -std=c99

CC	=	gcc

all:		${NAME}
		ar rc ${NAME} ${OBJ}
		ranlib ${NAME}

${NAME}:	${OBJ}
		${CC} ${CFLAGS} -c ${SRCS} -I ${INC}

clean:		
		rm -rf ${OBJ}

fclean:		clean
		rm -rf ${NAME}

re:		fclean all

.PHONY: all clean fclean re
