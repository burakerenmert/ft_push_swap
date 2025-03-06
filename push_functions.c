/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_functions.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: burakerenmert <burakerenmert@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/09 00:55:58 by buramert          #+#    #+#             */
/*   Updated: 2025/03/06 03:41:47 by burakerenme      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	pa(t_stack **head_a, t_stack **head_b)
{
	t_stack	*first_b;

	first_b = *head_b;
	*head_b = first_b -> next;
	if (!head_b)
		return ;
	first_b -> next = *head_a;
	*head_a = first_b;
	ft_printf("pa\n");
}

void	pb(t_stack **head_a, t_stack **head_b)
{
	t_stack	*first_a;

	first_a = *head_a;
	*head_a = first_a -> next;
	if (!head_a)
		return ;
	first_a -> next = *head_b;
	*head_b = first_a;
	ft_printf("pb\n");
}
