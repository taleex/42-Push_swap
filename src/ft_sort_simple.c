/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_simple.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: username <username@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/23 13:37:22 by username          #+#    #+#             */
/*   Updated: 2026/11/23 14:25:18 by username         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static int	ft_is_simple_sort(t_stack *a)
{
	t_node	*node;

	if (!a || a->size < 2)
		return (1);
	node = a->top;
	while (node && node->next)
	{
		if (node->value > node->next->value)
			return (0);
		node = node->next;
	}
	return (1);
}

void	ft_simple_sort(t_stack *a)
{
	int	i;
	int	j;

	if (!a || a->size < 2)
		return ;
	i = 0;
	while (i < a->size && !ft_is_simple_sort(a))
	{
		j = 0;
		while (j < a->size)
		{
			if (a->size >= 2 && a->top->value > a->top->next->value)
				ft_sa(a);
			ft_ra(a);
			j++;
		}
		i++;
	}
}
