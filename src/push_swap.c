/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: username <username@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/23 11:03:07 by username          #+#    #+#             */
/*   Updated: 2026/11/23 13:14:11 by username         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	main(int argc, char **argv)
{
	t_stack		a;
	t_stack		b;
	t_options	options;

	if (argc < 2)
		return (0);
	ft_parse_args(argc, argv, &options);
	ft_stack_init(&a);
	ft_stack_init(&b);
	if (!ft_stack_build(&a, argv + options.first_number))
	{
		ft_stack_clear(&a);
		ft_stack_clear(&b);
		ft_error_exit();
	}
	ft_stack_clear(&a);
	ft_stack_clear(&b);
	return (0);
}
