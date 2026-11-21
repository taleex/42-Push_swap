/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: username <username@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/21 10:29:28 by username          #+#    #+#             */
/*   Updated: 2026/11/21 18:26:45 by username         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static int	ft_swap_top(t_stack **stack)
{
	t_stack	*first;
	t_stack	*second;

	if (!stack || !*stack || !(*stack)->next)
		return (0);
	first = *stack;
	second = first->next;
	first->next = second->next;
	second->next = first;
	*stack = second;
	return (1);
}

void	sa(t_stack **a)
{
	if (ft_swap_top(a))
		ft_printf("sa\n");
}

void	sb(t_stack **b)
{
	if (ft_swap_top(b))
		ft_printf("sb\n");
}

void	ss(t_stack **a, t_stack **b)
{
	int	swap_a;
	int	swap_b;

	swap_a = ft_swap_top(a);
	swap_b = ft_swap_top(b);
	if (swap_a || swap_b)
		ft_printf("ss\n");
}
