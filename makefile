# Config
NAME 	= libft.a #nom de la librairie
CC 		= gcc #compilateur
CFLAGS 	= -g -Wall -Werror -Wextra #flags / options de compilations
AR 		= ar rcs
RM		= rm -f

#Files
OBJ_DIR = obj
SRC_DIR = src

#fichiers sources
SRC =  	ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c	\
		ft_strlen.c ft_memset.c ft_bzero.c ft_strlcpy.c ft_strlcat.c 		\
		ft_toupper.c ft_tolower.c ft_strchr.c ft_strrchr.c ft_strncmp.c

OBJ = $(addprefix $(OBJ_DIR)/, $(SRC:.c=.o)) #fichiers objets

#rules
all: $(NAME)
#creation de la lib
$(NAME): $(OBJ)
	$(AR) $(NAME) $(OBJ)

#compilation: .c ->obj/.o
$(OBJ_DIR)/%.o: %.c | $(OBJ_DIR)
	$(CC) $(CFLAGS) -c $< -o $@
$(OBJ_DIR):
	mkdir -p $(OBJ_DIR)

clean:
	$(RM) -r $(OBJ_DIR)

fclean: clean
	$(RM) $(NAME)

re: fclean all
.PHONY: all clean fclean re