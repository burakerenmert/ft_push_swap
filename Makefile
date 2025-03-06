CC = gcc
CFLAGS = -Wall -Wextra -Werror

PRINTF_DIR = ft_printf
PRINTF = $(PRINTF_DIR)/libftprintf.a

SRC = push_swap.c error_check.c atoi.c get_index.c push_functions.c\
reverse_rotate_functions.c rotate_functions.c swap_functions.c radix.c sort_three.c
OBJ = $(SRC:.c=.o)

NAME = push_swap

all: $(PRINTF) $(NAME)

$(PRINTF):
	make -C $(PRINTF_DIR)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) $(PRINTF) -o $(NAME)

clean:
	rm -f $(OBJ)
	make clean -C $(PRINTF_DIR)

fclean: clean
	rm -f $(NAME)
	make fclean -C $(PRINTF_DIR)

re: fclean all

