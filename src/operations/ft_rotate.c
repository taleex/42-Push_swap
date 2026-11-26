/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rotate.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorgferr <jorgferr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/21 13:00:00 by luisdos           #+#    #+#             */
/*   Updated: 2026/11/26 14:26:56 by jorgferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

static void	ft_rotate(t_stack *stack)
{
	t_node	*first;

	if (stack->size < 2)
		return ;
	first = stack->top;
	stack->top = first->next;
	stack->top->prev = NULL;
	first->next = NULL;
	first->prev = stack->bottom;
	stack->bottom->next = first;
	stack->bottom = first;
}

void	ft_ra(t_stack *a)
{
	ft_rotate(a);
	ft_putendl_fd("ra", 1);
}

void	ft_rb(t_stack *b)
{
	ft_rotate(b);
	ft_putendl_fd("rb", 1);
}

void	ft_rr(t_stack *a, t_stack *b)
{
	ft_rotate(a);
	ft_rotate(b);
	ft_putendl_fd("rr", 1);
}
