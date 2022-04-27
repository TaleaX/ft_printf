CC=gcc
CFLAGS=-Wall -Werror -Wextra
L_SRC=libft/ft_isalpha.c libft/ft_isdigit.c libft/ft_isalnum.c libft/ft_isascii.c libft/ft_isprint.c \
	libft/ft_strlen.c libft/ft_memset.c libft/ft_bzero.c libft/ft_memcpy.c libft/ft_memmove.c libft/ft_strlcpy.c libft/ft_strlcat.c \
	libft/ft_toupper.c libft/ft_tolower.c libft/ft_strchr.c libft/ft_strrchr.c libft/ft_strncmp.c libft/ft_memchr.c libft/ft_atoi.c \
	libft/ft_calloc.c libft/ft_strdup.c libft/ft_substr.c libft/ft_strjoin.c libft/ft_strtrim.c libft/ft_split.c libft/ft_itoa.c \
	libft/ft_strmapi.c libft/ft_striteri.c libft/ft_putchar_fd.c libft/ft_putstr_fd.c libft/ft_putendl_fd.c libft/ft_putnbr_fd.c libft/ft_memcmp.c \
	libft/ft_strnstr.c
SRC=ft_printf.c ft_write_arg.c ft_utils.c test.c
BONUS=libft/ft_lstnew.c libft/ft_lstadd_front.c libft/ft_lstsize.c libft/ft_lstlast.c libft/ft_lstadd_back.c libft/ft_lstdelone.c libft/ft_lstclear.c \
	libft/ft_lstiter.c libft/ft_lstmap.c
OBJ=$(SRC:.c=.o)
B_OBJ=$(BONUS:.c=.o)
LIB_SRCDIR=libft/
NAME=libftprintf.a

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(OBJ) $(L_SRC) -o run
	ar rc $(NAME) $(OBJ)
	rm -f *.o

bonus: $(B_OBJ) $(OBJ)
	ar rc $(NAME) $(OBJ) $(B_OBJ)

$(B_OBJ): $(BONUS)
	$(CC) $(CFLAGS) -c $(BONUS)

$(OBJ): $(L_SRC) $(SRC)
	$(CC) $(CFLAGS) -c $(L_SRC) $(SRC)

clean:
	rm -f *.o

fclean: clean
	rm -f $(NAME)

re: fclean all


CC=gcc
LIB_DIR=libft/
OBJ_DIR=obj/
CFLAGS=-Wall -Werror -Wextra
LIB_SRC =ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c \
	ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c ft_strlcpy.c ft_strlcat.c \
	ft_toupper.c ft_tolower.c ft_strchr.c ft_strrchr.c ft_strncmp.c ft_memchr.c ft_atoi.c \
	ft_calloc.c ft_strdup.c ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c ft_itoa.c \
	ft_strmapi.c ft_striteri.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_memcmp.c \
	ft_strnstr.c
SRC=ft_printf.c ft_write_arg.c ft_utils.c test.c
OBJ_NAME=$(SRC:.c=.o)
OBJ_NAME_LIB=$(LIB_SRC:.c=.o)
OBJS=$(addprefix $(OBJ_DIR),$(OBJ_NAME))
OBJS_LIB=$(addprefix $(LIB_DIR), $(OBJ_NAME_LIB))
NAME=libftprintf.a

all: $(NAME)
	ar rcs $(NAME) $(OBJS) $(OBJS_LIB)

$(OBJ_DIR)%.o: %.c $(LIB_DIR)%.c
	mkdir -p $(OBJ_DIR)
	$(CC) $(CFLAGS) -c $^ -o $@
	
clean:
	rm -f *.o

fclean: clean
	rm -f $(NAME)

re: fclean all

#https://github.com/sshiling/42-push_swap/blob/master/Makefile
#@make -C $(LIB_DIR) ar rc $@ $^
#$(OBJ_DIR)%.o : %.c $(LIB_DIR)%.c
#mkdir -p $(OBJ_DIR)
#$(CC) $(CFLAGS) -o $@ -c $^