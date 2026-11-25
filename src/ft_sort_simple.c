/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_simple.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorgferr <jorgferr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/25 11:26:58 by jorgferr          #+#    #+#             */
/*   Updated: 2026/11/25 11:27:00 by jorgferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static void	ft_bring_min_top(t_stack *a)
{
	t_node	*node;
	t_node	*min;
	int		i;
	int		min_pos;

	i = 0;
	min_pos = 0;
	node = a->top;
	min = a->top;
	while (node)
	{
		if (node->value < min->value)
		{
			min = node;
			min_pos = i;
		}
		node = node->next;
		i++;
	}
	if (min_pos <= a->size / 2)
		while (a->top != min)
			ft_ra(a);
	else
		while (a->top != min)
			ft_rra(a);
}

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

void	ft_simple_sort(t_stack *a, t_stack *b)
{
	if (!a || a->size < 2 || ft_is_simple_sort(a))
		return ;
	while (a->size > 0)
	{
		ft_bring_min_top(a);
		ft_pb(a, b);
	}
	while (b->size > 0)
	{
		ft_pa(a, b);
	}
}
