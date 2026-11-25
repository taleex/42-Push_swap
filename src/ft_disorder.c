/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_disorder.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorgferr <jorgferr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/25 11:27:27 by jorgferr          #+#    #+#             */
/*   Updated: 2026/11/25 11:27:29 by jorgferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

double	ft_disorder(t_stack *stack)
{
	long	mistakes;
	long	total_pairs;
	t_node	*node_i;
	t_node	*node_j;

	if (!stack)
		return (0.0);
	mistakes = 0;
	total_pairs = 0;
	node_i = stack->top;
	while (node_i)
	{
		node_j = node_i->next;
		while (node_j)
		{
			total_pairs++;
			if (node_i->value > node_j->value)
				mistakes++;
			node_j = node_j->next;
		}
		node_i = node_i->next;
	}
	if (total_pairs == 0)
		return (0.0);
	return ((double)mistakes / total_pairs);
}
