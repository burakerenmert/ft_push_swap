/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: buramert <buramert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 04:22:47 by burakerenme       #+#    #+#             */
/*   Updated: 2025/03/05 03:39:22 by buramert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	print_index(stack *head)
{
	ft_printf("index : ");
	while (head != NULL)
	{
		ft_printf("%d -> ", head->index);
		head = head->next;
	}
	ft_printf("NULL\n");
}
void	print_stack_a(stack *first)
{
	ft_printf("stack a : ");
	while (first != NULL)
    {
        ft_printf("%d -> ", first->data);
        first = first->next;
    }
	ft_printf("NULL\n");
}
int main(int ac, char **av)
{
	if (ac < 2)
		exit(1);
	stack *first_a;
	stack *first_b;
	first_a = NULL;
	first_b = NULL;
	error_check(av, &first_a);
	check_sorted(first_a);
	get_array(&first_a);
	if (ac == 4)
		sort_three(&first_a);
	else if(ac == 6)
		sort_five(&first_a, &first_b);
	else
		radix_sort(&first_a, &first_b);
}
