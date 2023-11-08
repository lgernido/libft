###########################################################################
#### ARGUMENTS

NAME		= libft.a
CC			= gcc
CFLAGS		= -Wall -Werror -Wextra
AR 			= ar -rcsv

###########################################################################
#### SOURCES

SRC_FILES	= ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c ft_itoa.c \
ft_memchr.c ft_memcmp.c ft_memcpy.c ft_memmove.c ft_memset.c ft_putchar_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_putstr_fd.c \
ft_split.c ft_strchr.c ft_strdup.c ft_striteri.c ft_strjoin.c ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_strmapi.c ft_strncmp.c \
ft_strnstr.c ft_strrchr.c ft_strtrim.c ft_substr.c ft_tolower ft_toupper.c 

OBJ_FILES	= $(SRC_FILES : .c = .o)

###########################################################################
#### RULES

${NAME} : ${OBJ_FILES}
		${AR} -o ${NAME} ${OBJ_FILES}

all : clean fclean

clean :
	rm -f *.o

fclean : clean
	rm -f ${NAME}

re : fclean all

.PHONY : all clean fclean 