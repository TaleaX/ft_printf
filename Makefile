CC=cc
CFLAGS=-Wall -Werror -Wextra
SRC=ft_printf.c ft_write_arg.c ft_utils.c libft_funcs.c
TEST_FILE=test.c
OBJ=$(SRC:.c=.o)
NAME=libftprintf.a

all: $(NAME)

$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)

$(OBJ): $(SRC)
	$(CC) $(CFLAGS) -c $(SRC)

test: $(SRC) $(TEST_FILE)
	$(CC) $(FLAGS) $(SRC) $(TEST_FILE) -o run

clean:
	rm -f *.o

fclean: clean
	rm -f $(NAME)

re: fclean all
