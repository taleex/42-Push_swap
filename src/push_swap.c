/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: username <username@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/21 18:35:57 by username          #+#    #+#             */
/*   Updated: 2026/11/21 19:07:59 by username         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

// int	main(int argc, char **argv)
// {
// 	int	i;
// 	int	j;

// 	i = 1;
// 	if (argc > 1)
// 	{
// 		while (argv[i])
// 		{
// 			j = 0;
// 			while (argv[i][j])
// 			{
// 				j++;
// 			}
// 			i++;
// 		}
// 	}
// 	return (0);
// }

static void	print_stack(t_stack *stack, char *name)
{
	ft_printf("%s: ", name);
	while (stack)
	{
		ft_printf("%d -> ", stack->value);
		stack = stack->next;
	}
	ft_printf("NULL\n");
}

static void	free_stack(t_stack **stack)
{
	t_stack	*tmp;

	while (stack && *stack)
	{
		tmp = (*stack)->next;
		free(*stack);
		*stack = tmp;
	}
}

int	main(void)
{
	t_stack	*a;
	t_stack	*b;

	a = new_node(2);
	a->next = new_node(5);
	a->next->next = new_node(9);
	b = NULL;
	print_stack(a, "Antes A");
	print_stack(b, "Antes B");
	pa(&a, &b);
	pb(&a, &b);
	pb(&a, &b);
	print_stack(a, "Depois A");
	print_stack(b, "Depois B");
	free_stack(&a);
	free_stack(&b);
	return (0);
}
