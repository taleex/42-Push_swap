/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parse_args.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: username <username@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/22 18:34:33 by luisdos           #+#    #+#             */
/*   Updated: 2026/11/23 10:58:11 by username         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static void	ft_parse_flags(int argc, char **argv, t_options *options)
{
	int	i;

	i = options->first_number;
	while (i < argc && ft_strncmp(argv[i], "--", 2) == 0)
	{
		if (ft_is_bench_flag(argv[i]) == BENCH)
			options->bench = BENCH;
		else
		{
			options->strategy = ft_parse_strategy(argv[i]);
			if (options->strategy == STRATEGY_INVALID)
				ft_error_exit();
		}
		i++;
	}
	options->first_number = i;
}

static void	ft_validate_numbers(char **numbers)
{
	int	i;

	i = 0;
	while (numbers[i] != NULL)
	{
		if (!ft_is_integer_format(numbers[i])
			|| !ft_is_integer_range(numbers[i]))
			ft_error_exit();
		i++;
	}
	if (ft_has_duplicates(numbers) == 1)
		ft_error_exit();
}

void	ft_parse_args(int argc, char **argv, t_options *options)
{
	options->strategy = STRATEGY_ADAPTIVE;
	options->bench = BENCH_INVALID;
	options->first_number = 1;
	ft_parse_flags(argc, argv, options);
	ft_validate_numbers(argv + options->first_number);
}
