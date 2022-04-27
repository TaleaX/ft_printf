CC=cc
CFLAGS=-Wall -Werror -Wextra
SRC=ft_printf.c ft_write_arg.c ft_utils.c libft_funcs.c
OBJ=$(SRC:.c=.o)
NAME=libftprintf.a

all: $(NAME)

$(NAME): $(OBJ)
	ar rc $(NAME) $(OBJ)

$(OBJ): $(SRC)
	$(CC) $(CFLAGS) -c $(SRC)

clean:
	rm -f *.o

fclean: clean
	rm -f $(NAME)

re: fclean all

