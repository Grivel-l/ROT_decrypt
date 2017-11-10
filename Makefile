NAME = rot_decrypt
LIB_NAME = libft.a
OBJS = ft_putchar.o ft_putstr.o ft_putnbr.o ft_putchar_fd.o ft_putstr_fd.o
FLAGS = -Wall -Wextra -Werror
SRCS_PATH = ./srcs/
INCS_PATH = ./includes/

all: $(NAME)

$(NAME): $(LIB_NAME)
	gcc $(FLAGS) -I $(INCS_PATH) $(addprefix $(SRCS_PATH), $(NAME)).c -o $(NAME) -L. -lft

$(LIB_NAME): $(OBJS)
	ar rcs $(LIB_NAME) $(OBJS)

%.o: $(SRCS_PATH)%.c
	gcc $(FLAGS) -I $(INCS_PATH) -c $(addprefix $(SRCS_PATH), $*).c -o $*.o

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME) $(LIB_NAME)

re: fclean all
