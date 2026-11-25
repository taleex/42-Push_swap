/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorgferr <jorgferr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/25 11:27:14 by jorgferr          #+#    #+#             */
/*   Updated: 2026/11/25 11:27:16 by jorgferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_node	*ft_stack_pop_top(t_stack *stack)
{
	t_node	*node;

	if (!stack || !stack->size)
		return (NULL);
	node = stack->top;
	stack->top = node->next;
	if (stack->top)
		stack->top->prev = NULL;
	else
		stack->bottom = NULL;
	stack->size--;
	node->next = NULL;
	return (node);
}

void	ft_stack_push_top(t_stack *stack, t_node *node)
{
	node->prev = NULL;
	node->next = stack->top;
	if (stack->top)
		stack->top->prev = node;
	else
		stack->bottom = node;
	stack->top = node;
	stack->size++;
}

static int	ft_push(t_stack *src, t_stack *dest)
{
	if (!src || !dest || !src->size)
		return (0);
	ft_stack_push_top(dest, ft_stack_pop_top(src));
	return (1);
}

void	ft_pa(t_stack *a, t_stack *b)
{
	if (ft_push(b, a))
		ft_printf("pa\n");
}

void	ft_pb(t_stack *a, t_stack *b)
{
	if (ft_push(a, b))
		ft_printf("pb\n");
}
