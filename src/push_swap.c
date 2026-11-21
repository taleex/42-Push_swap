/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: username <username@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/21 18:35:57 by username          #+#    #+#             */
/*   Updated: 2026/11/21 18:38:17 by username         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static t_stack	*new_node(int value)
{
	t_stack	*node;

	node = malloc(sizeof(t_stack));
	if (!node)
		return (NULL);
	node->value = value;
	node->next = NULL;
	return (node);
}

int	main(int argc, char **argv)
{
	int	i;
	int	j;

	i = 1;
	if (argc > 1)
	{
		while (argv[i])
		{
			j = 0;
			while (argv[i][j])
			{
				j++;
			}
			i++;
		}
	}
	return (0);
}
