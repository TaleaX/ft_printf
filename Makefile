CC=cc
CFLAGS=-Wall -Werror -Wextra
SRC=ft_printf.c ft_write_arg.c ft_utils.c libft_funcs.c test.c
OBJ=$(SRC:.c=.o)
NAME=libftprintf.a

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(FLAGS) $(SRC) -o run
	ar rc $(NAME) $(OBJ)
	@make clean

$(OBJ): $(SRC)
	$(CC) $(CFLAGS) -c $(SRC)

clean:
	rm -f *.o

fclean: clean
	rm -f $(NAME)

re: fclean all

