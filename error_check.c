/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_check.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: burakerenmert <burakerenmert@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/02 20:47:36 by buramert          #+#    #+#             */
/*   Updated: 2025/03/06 03:40:58 by burakerenme      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	error_check(char **args, t_stack **first)
{
	int	i;
	int	num;

	i = 1;
	while (args[i])
		i++;
	i--;
	while (i >= 1 && args[i])
	{
		num = ft_atoi(args[i]);
		fill_stack(num, first);
		i--;
	}
	check_duplicate_numbers(first);
}

void	fill_stack(int arg, t_stack **first)
{
	t_stack	*new_node;

	new_node = malloc(sizeof(t_stack));
	if (!new_node)
		exit(1);
	new_node->data = arg;
	new_node->next = *first;
	*first = new_node;
}

void	check_duplicate_numbers(t_stack **first)
{
	t_stack	*current;
	t_stack	*compare;

	current = *first;
	while (current != NULL)
	{
		compare = current->next;
		while (compare != NULL)
		{
			if (current->data == compare->data)
				print_error();
			compare = compare->next;
		}
		current = current->next;
	}
}

int	check_sorted(t_stack *first)
{
	while (first && first->next)
	{
		if (first->data > first->next->data)
			return (0);
		first = first->next;
	}
	exit(0);
}
