/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate_functions.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: burakerenmert <burakerenmert@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/09 21:31:00 by buramert          #+#    #+#             */
/*   Updated: 2025/03/06 03:42:35 by burakerenme      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rra(t_stack **head)
{
	t_stack	*prev;
	t_stack	*last;

	if (!head || !*head || !(*head)->next)
		return ;
	last = *head;
	prev = NULL;
	while (last->next)
	{
		prev = last;
		last = last->next;
	}
	prev->next = NULL;
	last->next = *head;
	*head = last;
	ft_printf("rra\n");
}

void	rrb(t_stack **head)
{
	t_stack	*prev;
	t_stack	*last;

	if (!head || !*head || !(*head)->next)
		return ;
	last = *head;
	prev = NULL;
	while (last->next)
	{
		prev = last;
		last = last->next;
	}
	prev->next = NULL;
	last->next = *head;
	*head = last;
	ft_printf("rrb\n");
}

void	rrr(t_stack **head_a, t_stack **head_b)
{
	rra(head_a);
	rrb(head_b);
	ft_printf("rrr\n");
}
