CC = cc
CFLAGS = -Wall -Wextra -Werror
NAME = libft.a

SRC = ft_atoi.c ft_isalpha.c ft_isprint.c ft_memcpy.c ft_strchr.c \
		ft_strlen.c ft_strrchr.c ft_bzero.c ft_isascii.c ft_memchr.c \
		ft_memmove.c ft_strlcat.c ft_strncmp.c ft_tolower.c ft_isalnum.c \
		ft_memset.c ft_strlcpy.c ft_strnstr.c ft_toupper.c \
		ft_isdigit.c ft_memcmp.c ft_calloc.c ft_strdup.c ft_substr.c\
		ft_strjoin.c ft_strtrim.c ft_split.c ft_itoa.c ft_strmapi.c\
		ft_striteri.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c\
		ft_putnbr_fd.c
BONUS = ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c\
		ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c ft_lstiter.c\
		ft_lstmap.c
OBJ = $(SRC:.c=.o)
BOBJ = $(BONUS:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	ar -rcs $(NAME) $(OBJ)

bonus: $(OBJ) $(BOBJ)
	ar -r $(NAME) $(BOBJ)

clean:
	rm -f $(OBJ) $(BOBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

so:
	$(CC) -nostartfiles -fPIC $(CFLAGS) $(SRC)
	gcc -nostartfiles -shared -o libft.so $(OBJ)

.PHONY: all clean fclean re bonus
