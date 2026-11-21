/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luisdos <luisdos@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/21 13:00:00 by luisdos           #+#    #+#             */
/*   Updated: 2026/11/21 13:00:00 by luisdos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"


static void rotate(t_stack *stack)
{
    t_node  *first;

    if (stack->size < 2)
        return;
    first = stack->top;
    stack->top = first->next;
    stack->top->prev = NULL;
    first->next = NULL;
    first->prev = stack->bottom;
    stack->bottom->next = first;
    stack->bottom = first;
}
void    ra(t_stack *a)
{
    rotate(a);
    ft_putendl_fd("ra", 1);
}

void    rb(t_stack *b)
{
    rotate(b);
    ft_putendl_fd("rb", 1);
}

void    rr(t_stack *a, t_stack *b)
{
    rotate(a);
    rotate(b);
    ft_putendl_fd("rr", 1);
}