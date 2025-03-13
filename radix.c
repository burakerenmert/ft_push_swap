/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: buramert <buramert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/04 05:13:55 by buramert          #+#    #+#             */
/*   Updated: 2025/03/13 18:59:57 by buramert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	find_max_index(t_stack *a)
{
	int	max;

	max = a->index;
	while (a)
	{
		if (a->index > max)
			max = a->index;
		a = a->next;
	}
	return (max);
}

int	calculate_max_bits(int max)
{
	int	bits;

	bits = 0;
	while ((max >> bits) != 0)
		bits++;
	return (bits);
}

void	radix_sort(t_stack **a, t_stack **b)
{
	int	max;
	int	i;
	int	j;
	int	size;

	if (!a || !*a)
		return ;
	max = find_max_index(*a);
	i = 0;
	size = max + 1;
	while (i < calculate_max_bits(max))
	{
		j = 0;
		while (j < size)
		{
			if ((*a) && (((*a)->index >> i) & 1))
				ra(a);
			else if (*a)
				pb(a, b);
			j++;
		}
		while (*b)
			pa(a, b);
		i++;
	}
}
