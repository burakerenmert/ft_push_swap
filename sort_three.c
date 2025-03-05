/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_three.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: buramert <buramert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 00:05:20 by buramert          #+#    #+#             */
/*   Updated: 2025/03/05 04:33:58 by buramert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	move_to_top(stack **first, int pos)
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
int find_min_place(stack **first)
{
	stack *head;
    int j;
    int place;
	int max_index;
	
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
int find_max_place(stack **first)
{
	stack *head;
    int j;
    int place;
	int max_index;
	
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
void	sort_three(stack **first)
{
    int max_pos;
    stack *head;
    stack *second;

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
void	sort_five(stack **first_a, stack **first_b)
{
	int min_pos;

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
