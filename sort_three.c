/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_three.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: burakerenmert <burakerenmert@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 00:05:20 by buramert          #+#    #+#             */
/*   Updated: 2025/03/06 03:43:23 by burakerenme      ###   ########.fr       */
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

void	sort_five(t_stack **first_a, t_stack **first_b)
{
	int	min_pos;

	min_pos = find_min_place(first_a);
	if (min_pos != 0)
		move_to_top(first_a, min_pos);
	pb(first_a, first_b);
	min_pos = find_min_place(first_a);
	if (min_pos != 0)
		move_to_top(first_a, min_pos);
	pb(first_a, first_b);
	sort_three(first_a);
	pa(first_a, first_b);
	pa(first_a, first_b);
}
