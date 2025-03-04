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
void	get_array(stack **head);
void	bubble_sort(int *arr, int size);
void	get_index(stack *head, int *arr, int size);
void    pa(stack **head_a, stack **head_b);
void    pb(stack **head_a, stack **head_b);
void    sa(stack **head);
void    sb(stack **head);
void    ss(stack **head_a, stack **head_b);
void    ra(stack **head);
void    rb(stack **head);
void	rr(stack **head_a, stack **head_b);
void    rra(stack **head);
void    rrb(stack **head);
void	rrr(stack **head_a, stack **head_b);
void	radix_sort(stack **a, stack **b);
int	calculate_max_bits(int max);
int	find_max_index(stack *a);
int	check_sorted(stack *first);
void	sort_three(stack **first);
int find_max_place(stack **first);
#endif