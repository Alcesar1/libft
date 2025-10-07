# Config
NAME 	= libft.a #nom de la librairie
CC 		= gcc #compilateur
CFLAGS 	= -g -Wall -Werror -Wextra #flags / options de compilations
AR 		= ar rcs
RM		= rm -f

#Files
SRC = $(PART1) #fichiers sources
OBJ = $(SRC:.c=.o) #fichiers objets

PART1 : ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c 				\
		ft_isprint.c ft_strlen.c ft_memset.c ft_bzero.c ft_memcy.c 			\
		ft_memmove.c ft_strlcpy.c ft_strlcat.c ft_toupper.c ft_tolower.c 	\
		ft_strchr.c ft_strrchr.c ft_strncmp.c ft_memchr.c ft_memcmp.c 		\
		ft_strnstr.c ft_atoi.c ft_calloc.c ft_strdup.c

#rules






