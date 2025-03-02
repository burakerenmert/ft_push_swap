#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

#include "Libft/libft.h"
#include "ft_printf/ft_printf.h"
#include "stdlib.h"

typedef struct s_list
{
    int data;
    int index;
    struct s_list *next;
}stack;
init_list (char num);

#endif