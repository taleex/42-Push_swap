/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack_build.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorgferr <jorgferr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/22 19:39:32 by luisdos           #+#    #+#             */
/*   Updated: 2026/11/26 14:42:13 by jorgferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

int	ft_stack_build(t_stack *stack, char **numbers)
{
	t_node	*node;
	int		i;

	i = 0;
	while (numbers[i] != NULL)
	{
		node = ft_node_new(ft_atoi(numbers[i]));
		if (!node)
			return (0);
		ft_stack_add_back(stack, node);
		i++;
	}
	return (1);
}
