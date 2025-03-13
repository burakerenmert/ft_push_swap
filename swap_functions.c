/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_functions.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: buramert <buramert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/08 19:29:34 by buramert          #+#    #+#             */
/*   Updated: 2025/03/13 18:59:17 by buramert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sa(t_stack **head)
{
	t_stack	*first;
	t_stack	*second;

	if (!head || !*head || !(*head)->next)
		return ;
	first = *head;
	second = first->next;
	first->next = second->next;
	second->next = first;
	*head = second;
	ft_printf("sa\n");
}

void	sb(t_stack **head)
{
	t_stack	*first;
	t_stack	*second;

	if (!head || !*head || !(*head)->next)
		return ;
	first = *head;
	second = first->next;
	first->next = second->next;
	second->next = first;
	*head = second;
	ft_printf("sb\n");
}

void	ss(t_stack **head_a, t_stack **head_b)
{
	sa(head_a);
	sb(head_b);
	ft_printf("ss\n");
}
