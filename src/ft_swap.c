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

void ft_swap_top(t_stack **stack)
{
	t_stack *first;
	t_stack *second;

	if (!*stack || !stack)
		return ;
	first = *stack;
	second = first->next;
	first->next = second->next;
	second->next = first;
	*stack = second;
}

void sa(t_stack **a)
{
	ft_swap_top(a);
	ft_printf("sa");
}
void sb(t_stack **b)
{
	ft_swap_top(b);
}

void ss(t_stack **a, t_stack **b)
{
	ft_swap_top(a);
	ft_swap_top(b);
}
