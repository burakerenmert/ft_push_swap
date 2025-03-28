/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_index.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: buramert <buramert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/22 17:33:02 by buramert          #+#    #+#             */
/*   Updated: 2025/03/13 19:00:26 by buramert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	get_array(t_stack **first)
{
	t_stack	*start;
	int		size;
	int		*arr;
	int		i;

	start = *first;
	size = 1;
	i = 0;
	while (start->next != NULL)
	{
		start = start->next;
		size++;
	}
	start = *first;
	arr = malloc(sizeof(int) * size);
	if (!arr)
		return ;
	while (i < size)
	{
		arr[i++] = start->data;
		start = start->next;
	}
	bubble_sort(arr, size);
	get_index(*first, arr, size);
	free(arr);
}

void	bubble_sort(int *arr, int size)
{
	int	swapped;
	int	i;
	int	temp;

	swapped = 1;
	while (swapped)
	{
		swapped = 0;
		i = 0;
		while (i < size - 1)
		{
			if (arr[i] > arr[i + 1])
			{
				temp = arr[i];
				arr[i] = arr[i + 1];
				arr[i + 1] = temp;
				swapped = 1;
			}
			i++;
		}
		size--;
	}
}

void	get_index(t_stack *head, int *arr, int size)
{
	t_stack	*first;
	int		i;

	first = head;
	while (first != NULL)
	{
		i = 0;
		while (i < size)
		{
			if (first->data == arr[i])
			{
				first->index = i;
				break ;
			}
			i++;
		}
		first = first->next;
	}
}
