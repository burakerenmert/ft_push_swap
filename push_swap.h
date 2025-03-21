/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: buramert <buramert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/06 03:33:49 by buramert          #+#    #+#             */
/*   Updated: 2025/03/13 19:00:05 by buramert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "ft_printf/ft_printf.h"
# include "stdlib.h"

# define MAX_INT 2147483647
# define MIN_INT -2147483648

typedef struct t_list
{
	int				data;
	int				index;
	struct t_list	*next;
}	t_stack;
void	error_check(char **args, t_stack **first);
void	fill_stack(int arg, t_stack **first);
void	print_error(t_stack **first_a);
int		ft_atoi(const char *str, t_stack **first);
void	check_duplicate_numbers(t_stack **first);
void	get_array(t_stack **head);
void	bubble_sort(int *arr, int size);
void	get_index(t_stack *head, int *arr, int size);
void	pa(t_stack **head_a, t_stack **head_b);
void	pb(t_stack **head_a, t_stack **head_b);
void	sa(t_stack **head);
void	sb(t_stack **head);
void	ss(t_stack **head_a, t_stack **head_b);
void	ra(t_stack **head);
void	rb(t_stack **head);
void	rr(t_stack **head_a, t_stack **head_b);
void	rra(t_stack **head);
void	rrb(t_stack **head);
void	rrr(t_stack **head_a, t_stack **head_b);
void	radix_sort(t_stack **a, t_stack **b);
int		calculate_max_bits(int max);
int		find_max_index(t_stack *a);
int		check_sorted(t_stack *first);
void	sort_three(t_stack **first);
int		find_max_place(t_stack **first);
int		find_min_place(t_stack **first);
void	move_to_top(t_stack **first, int pos);
void	free_stack(t_stack **first);
void	sort_small(t_stack **a, t_stack **b);
#endif