/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_medium.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorgferr <jorgferr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/25 11:32:39 by jorgferr          #+#    #+#             */
/*   Updated: 2026/11/26 14:36:23 by jorgferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

static int	ft_chunk_size(int n)
{
	if (n <= 100)
		return (15);
	return (35);
}

void	ft_sort_medium(t_stack *a, t_stack *b)
{
	int count;
	int chunk_size;

	if (!a || !b || a->size < 2)
		return ;
	count = 0;
	chunk_size = ft_chunk_size(a->size);
	while (a->size > 0)
	{
		if (a->top->index <= count)
		{
			ft_pb(a, b);
			count++;
		}
		else if (a->top->index <= count + chunk_size)
		{
			ft_pb(a, b);
			ft_rb(b);
			count++;
		}
		else
			ft_ra(a);
	}
}
// static int	ft_find_max_position(t_stack *b)
// {
// 	int	max;
// 	int	max_p;
// 	int	i;
// 	t_node *node;

// 	if (!b || b->size == 0)
// 		return (-1);
// 	max = -1;
// 	max_p = 0;
// 	i = 0;
// 	node = b->top;

// 	while (node)
// 	{
// 		if (node->index > max)
// 		{
// 			max = node->index;
// 			max_p = i;
// 		}
// 		i++;
// 		node = node->next;
// 	}
// 	return (max_p);
// }

void	ft_sort_mediums(t_stack *a, t_stack *b)
{
	if (!a || !b || a->size < 2)
		return ;
}
