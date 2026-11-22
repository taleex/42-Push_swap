/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack_build.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luisdos <luisdos@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/22 19:39:32 by luisdos           #+#    #+#             */
/*   Updated: 2026/11/22 19:39:32 by luisdos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int ft_stack_build(t_stack *stack, char **numbers)
{
    t_node *node;
    int i;

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