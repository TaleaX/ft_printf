CC=gcc
CFLAGS=-Wall -Werror -Wextra
SRC=ft_printf.c ft_process_arg.c test_printf.c
OBJ=$(SRC:.c=.o)
NAME=libftprintf.a

all:$(NAME)

$(NAME) : $(OBJ)
	ar -rcs $(NAME) $(OBJ)

$(OBJ) : $(SRC)
	$(CC) $(CFLAGS) -c $(SRC)

run : $(SRC)
	$(CC) $(CFLAGS) $(SRC) -lft -o run -Iinclude -L .