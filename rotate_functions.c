/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_functions.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: buramert <buramert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/09 19:31:34 by buramert          #+#    #+#             */
/*   Updated: 2025/03/13 18:59:34 by buramert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ra(t_stack **head)
{
	t_stack	*first;
	t_stack	*last;

	if (!head || !*head || !(*head)->next)
		return ;
	last = *head;
	first = *head;
	while (last->next != NULL)
	{
		last = last -> next;
	}
	*head = first->next;
	first->next = NULL;
	last->next = first;
	ft_printf("ra\n");
}

void	rb(t_stack **head)
{
	t_stack	*first;
	t_stack	*last;

	if (!head || !*head || !(*head)->next)
		return ;
	last = *head;
	first = *head;
	while (last->next != NULL)
	{
		last = last -> next;
	}
	*head = first->next;
	first->next = NULL;
	last->next = first;
	ft_printf("rb\n");
}

void	rr(t_stack **head_a, t_stack **head_b)
{
	ra(head_a);
	rb(head_b);
	ft_printf("rr\n");
}
