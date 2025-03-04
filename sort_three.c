/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_three.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: buramert <buramert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 00:05:20 by buramert          #+#    #+#             */
/*   Updated: 2025/03/05 02:07:23 by buramert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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
void sort_three(stack **first)
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

