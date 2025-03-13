/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: burakerenmert <burakerenmert@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 04:22:47 by burakerenme       #+#    #+#             */
/*   Updated: 2025/03/13 14:32:33 by burakerenme      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	free_stack(t_stack **first)
{
	t_stack	*tmp;

	while (*first)
	{
		tmp = *first;
		*first = (*first)->next;
		free(tmp);
	}
}

int	main(int ac, char **av)
{
	t_stack	*first_a;
	t_stack	*first_b;

	if (ac < 2)
		exit(1);
	first_a = NULL;
	first_b = NULL;
	error_check(av, &first_a);
	check_sorted(first_a);
	get_array(&first_a);
	if (ac == 4)
		sort_three(&first_a);
	else if (ac == 6)
		sort_five(&first_a, &first_b);
	else
		radix_sort(&first_a, &first_b);
	free_stack(&first_a);
	free_stack(&first_b);
}
