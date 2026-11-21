/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luisdos <luisdos@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/21 14:12:00 by luisdos           #+#    #+#             */
/*   Updated: 2026/11/21 14:12:00 by luisdos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static void reverse_rotate(t_stack *stack)
{
    t_node  *last;

    if (stack->size < 2)
        return;
    last = stack->bottom;
    stack->bottom = last->prev;
    stack->bottom->next = NULL;
    last->prev = NULL;
    last->next = stack->top;
    stack->top->prev = last;
    stack->top = last;
}

void    rra(t_stack *a)
{
    reverse_rotate(a);
    ft_putendl_fd("rra", 1);
}

void    rrb(t_stack *b)
{
    reverse_rotate(b);
    ft_putendl_fd("rrb", 1);
}

void    rrr(t_stack *a, t_stack *b)
{
    reverse_rotate(a);
    reverse_rotate(b);
    ft_putendl_fd("rrr", 1);
}