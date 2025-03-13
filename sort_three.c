/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_three.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: buramert <buramert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 00:05:20 by buramert          #+#    #+#             */
/*   Updated: 2025/03/13 18:52:51 by buramert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	move_to_top(t_stack **first, int pos)
{
	int			size;
	static int	i = 0;

	size = (((find_max_index(*first) + 1) - i));
	if (pos > (size / 2))
	{
		while (pos < size)
		{
			rra(first);
			pos++;
		}
	}
	else
	{
		while (pos > 0)
		{
			ra(first);
			pos--;
		}
	}
	i++;
}

int	find_min_place(t_stack **first)
{
	t_stack	*head;
	int		j;
	int		place;
	int		max_index;

	head = *first;
	j = 0;
	place = 0;
	max_index = head->index;
	while (head != NULL)
	{
		if (head->index < max_index)
		{
			max_index = head->index;
			place = j;
		}
		head = head->next;
		j++;
	}
	return (place);
}

int	find_max_place(t_stack **first)
{
	t_stack	*head;
	int		j;
	int		place;
	int		max_index;

	head = *first;
	j = 0;
	place = 0;
	max_index = head->index;
	while (head != NULL)
	{
		if (head->index > max_index)
		{
			max_index = head->index;
			place = j;
		}
		head = head->next;
		j++;
	}
	return (place);
}

void	sort_three(t_stack **first)
{
	int		max_pos;
	t_stack	*head;
	t_stack	*second;

	max_pos = find_max_place(first);
	if (max_pos == 0)
		ra(first);
	else if (max_pos == 1)
		rra(first);
	head = *first;
	second = head->next;
	if (head->index > second->index)
		sa(first);
}

void	sort_small(t_stack **a, t_stack **b)
{
	int	size;

	size = (find_max_index(*a) + 1);
	while (size > 3)
	{
		move_to_top(a, find_min_place(a));
		pb(a, b);
		size--;
	}
	sort_three(a);
	while (*b)
		pa(a, b);
}
