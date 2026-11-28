/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_complex.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: username <username@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/28 15:16:04 by username          #+#    #+#             */
/*   Updated: 2026/11/28 16:13:44 by username         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

static int	ft_max_digits(int size)
{
	int	max;
	int	i;

	max = size - 1;
	i = 0;
	while (max > 0)
	{
		max = max / 2;
		i++;
	}
	return (i);
}

static void	ft_radix(t_stack *a, t_stack *b, int i)
{
	int	size;
	int	j;

	j = 0;
	size = a->size;
	while (j < size)
	{
		if (((a->top->index >> i) & 1) == 1)
			ft_ra(a);
		else
			ft_pb(a, b);
		j++;
	}
	while (b->size > 0)
		ft_pa(a, b);
}

void	ft_sort_complex(t_stack *a, t_stack *b)
{
	int	max_digits;
	int	i;

	if (!a || !b || a->size < 2)
		return ;
	max_digits = ft_max_digits(a->size);
	ft_index_stack(a);
	i = 0;
	while (i < max_digits)
	{
		ft_radix(a, b, i);
		i++;
	}
}
