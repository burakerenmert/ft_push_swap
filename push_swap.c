/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: burakerenmert <burakerenmert@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 04:22:47 by burakerenme       #+#    #+#             */
/*   Updated: 2025/03/04 04:03:53 by burakerenme      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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
	stack *first;
	first = NULL;
	error_check(av, &first);
	print_stack_a(first);
}
