CC=gcc
LIB_SRCDIR=libft/
OBJ_DIR=obj/
CFLAGS=-Wall -Werror -Wextra
SRC=ft_printf.c ft_write_arg.c ft_utils.c test.c
OBJ_NAME=$(SRC:.c=.o)
OBJS=$(addprefix $(OBJ_DIR),$(OBJ_NAME))
NAME=libftprintf.a

all: $(NAME)

$(NAME): $(OBJ)
	@make -C $(LIB_SRCDIR)
	ar rc $@ $^

$(OBJ): $(L_SRC) $(SRC)
	$(CC) $(CFLAGS) -c $(L_SRC) $(SRC)

$(OBJ_DIR)%.o : %.c $(LIB_SRCDIR)%.c
	mkdir -p $(OBJ_DIR)
	$(CC) $(CFLAGS) -o $@ -c $< 
clean:
	rm -f *.o

fclean: clean
	rm -f $(NAME)

re: fclean all
#https://github.com/sshiling/42-push_swap/blob/master/Makefile