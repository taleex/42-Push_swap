/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: username <username@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/21 10:29:28 by username          #+#    #+#             */
/*   Updated: 2026/11/21 12:07:41 by username         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_swap_top(t_stack *stack)
{
	t_node	*first;
	t_node	*second;

	if (!stack || stack->size < 2)
		return ;
	first = stack->top;
	second = first->next;
	first->next = second->next;
	if (first->next)
		first->next->prev = first;
	else
		stack->bottom = first;
	second->prev = NULL;
	second->next = first;
	first->prev = second;
	stack->top = second;
}

void	ft_sa(t_stack *a)
{
	ft_swap_top(a);
	ft_putendl_fd("sa", 1);
}

void	ft_sb(t_stack *b)
{
	ft_swap_top(b);
	ft_putendl_fd("sb", 1);
}

void	ft_ss(t_stack *a, t_stack *b)
{
	ft_swap_top(a);
	ft_swap_top(b);
	ft_putendl_fd("ss", 1);
}
