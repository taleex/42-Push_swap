/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_utils.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: username <username@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/28 15:49:32 by username          #+#    #+#             */
/*   Updated: 2026/11/28 15:50:06 by username         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

void	ft_index_stack(t_stack *stack)
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
