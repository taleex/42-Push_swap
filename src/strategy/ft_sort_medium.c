/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_medium.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: username <username@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/28 11:33:31 by username          #+#    #+#             */
/*   Updated: 2026/11/28 12:22:22 by username         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

static int	ft_chunk_size(int size)
{
	int	i;

	i = 1;
	while (i < size / i)
		i++;
	return (i - 1);
}

static void	ft_index_stack(t_stack *stack)
{
	t_node	*node;
	t_node	*cmp;
	int		rank;

	node = stack->top;
	while (node)
	{
		rank = 0;
		cmp = stack->top;
		while (cmp)
		{
			if (cmp->value < node->value)
				rank++;
			cmp = cmp->next;
		}
		node->index = rank;
		node = node->next;
	}
}

static void	ft_push_chunk(t_stack *a, t_stack *b, int start, int end)
{
	int	size;
	int	i;

	size = a->size;
	i = 0;
	while (i < size)
	{
		if (a->top->index >= start && end > a->top->index)
			ft_pb(a, b);
		else
			ft_ra(a);
		i++;
	}
}

static void	ft_push_back(t_stack *a, t_stack *b)
{
	int	target;

	while (b->size > 0)
	{
		target = b->size -1;
		while (b->top->index != target)
			ft_rb(b);
		ft_pa(a, b);
	}
}

void	ft_sort_medium(t_stack *a, t_stack *b)
{
	int	size;
	int	start;
	int	end;
	int	chunk_size;

	if (!a || !b || a->size < 2)
		return ;
	chunk_size = ft_chunk_size(a->size);
	size = a->size;
	start = 0;
	ft_index_stack(a);
	while (start < size)
	{
		end = start + chunk_size;
		ft_push_chunk(a, b, start, end);
		start = end;
	}
	ft_push_back(a, b);
}
