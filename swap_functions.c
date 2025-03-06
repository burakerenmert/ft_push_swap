/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_functions.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: burakerenmert <burakerenmert@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/08 19:29:34 by buramert          #+#    #+#             */
/*   Updated: 2025/03/06 03:28:41 by burakerenme      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sa(stack **head)
{
	stack	*first;
	stack	*second;

	if (!head || !*head || !(*head)->next)
		return ;
	first = *head;
	second = first->next;
	first->next = second->next;
	second->next = first;
	*head = second;
	ft_printf("sa\n");
}

void	sb(stack **head)
{
	stack	*first;
	stack	*second;

	if (!head || !*head || !(*head)->next)
		return ;
	first = *head;
	second = first->next;
	first->next = second->next;
	second->next = first;
	*head = second;
	ft_printf("sb\n");
}

void	ss(stack **head_a, stack **head_b)
{
	sa(head_a);
	sb(head_b);
	ft_printf("ss\n");
}
