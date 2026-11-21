/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: username <username@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/21 18:48:24 by username          #+#    #+#             */
/*   Updated: 2026/11/21 19:02:43 by username         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	ft_push(t_stack **src, t_stack **dest)
{
	t_stack	*tmp;

	if (!src || !dest || !*src)
		return (0);
	tmp = *src;
	*src = (*src)->next;
	tmp->next = *dest;
	*dest = tmp;
	return (1);
}

void	pa(t_stack **a, t_stack **b)
{
	if (ft_push(b, a))
		ft_printf("pa\n");
}

void	pb(t_stack **a, t_stack **b)
{
	if (ft_push(a, b))
		ft_printf("pb\n");
}
