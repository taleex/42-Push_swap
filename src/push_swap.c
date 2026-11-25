/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorgferr <jorgferr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/25 11:26:29 by jorgferr          #+#    #+#             */
/*   Updated: 2026/11/25 11:26:31 by jorgferr         ###   ########.fr       */
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
	ft_simple_sort(&a, &b);
	ft_stack_clear(&a);
	ft_stack_clear(&b);
	return (0);
}
