/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_reverse_rotate.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: username <username@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/21 14:12:00 by luisdos           #+#    #+#             */
/*   Updated: 2026/11/23 10:59:15 by username         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static void	ft_reverse_rotate(t_stack *stack)
{
	t_node	*last;

	if (stack->size < 2)
		return ;
	last = stack->bottom;
	stack->bottom = last->prev;
	stack->bottom->next = NULL;
	last->prev = NULL;
	last->next = stack->top;
	stack->top->prev = last;
	stack->top = last;
}

void	ft_rra(t_stack *a)
{
	ft_reverse_rotate(a);
	ft_putendl_fd("rra", 1);
}

void	ft_rrb(t_stack *b)
{
	ft_reverse_rotate(b);
	ft_putendl_fd("rrb", 1);
}

void	ft_rrr(t_stack *a, t_stack *b)
{
	ft_reverse_rotate(a);
	ft_reverse_rotate(b);
	ft_putendl_fd("rrr", 1);
}
