#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

#include "Libft/libft.h"
#include "ft_printf/ft_printf.h"
#include "stdlib.h"

typedef struct t_list
{
    int data;
    int index;
    struct t_list *next;
}stack;
void	error_check(char **args, stack **first);
void	fill_stack(int arg, stack **first);
void    print_error();
int ft_atoi(const char *str);
void	check_duplicate_numbers(stack **first);
#endif