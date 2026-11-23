/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: username <username@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/21 18:35:57 by username          #+#    #+#             */
/*   Updated: 2026/11/21 19:43:07 by username         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	main(int argc, char **argv)
{
<<<<<<< HEAD
	int	i;
	int	j;
=======
	t_stack	a;
	t_stack	b;
	t_options	options;
>>>>>>> luisdos

	if (argc < 2)
		return (0);
	ft_parse_args(argc, argv, &options);
	ft_stack_init(&a);
	ft_stack_init(&b);
	if (!ft_stack_build(&a, argv + options.first_number))
	{
<<<<<<< HEAD
		while (argv[i])
		{
			j = 0;
			while (argv[i][j])
			{
				ft_parse_check(argv[i][j]);
				j++;
			}
			i++;
		}
=======
		ft_stack_clear(&a);
		ft_stack_clear(&b);
		ft_error_exit();
>>>>>>> luisdos
	}
	ft_stack_clear(&a);
	ft_stack_clear(&b);
	return (0);
}
