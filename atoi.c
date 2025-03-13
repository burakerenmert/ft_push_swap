/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   atoi.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: burakerenmert <burakerenmert@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/04 03:49:47 by burakerenme       #+#    #+#             */
/*   Updated: 2025/03/13 14:36:42 by burakerenme      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	print_error(t_stack **first_a)
{
	ft_printf("Error\n");
	if (first_a)
		free_stack(first_a);
	exit(1);
}

int	ft_atoi(const char *str, t_stack **first)
{
	long	i;
	long	sign;
	long	sum;

	i = 0;
	sign = 1;
	sum = 0;
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-')
		sign = -1;
	if (str[i] == '+' || str[i] == '-')
		i++;
	while (str[i] <= 57 && str[i] >= 48)
	{
		sum *= 10;
		sum += str[i] - 48;
		if ((sum * sign) > MAX_INT || (sum * sign) < MIN_INT)
			print_error(first);
		i++;
	}
	if (!(str[i] <= 57 && str[i] >= 48) && (str[i] != ' ') && (str[i] != '\0'))
		print_error(first);
	return (sum * sign);
}
