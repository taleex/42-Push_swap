/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strategy.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luisdos <luisdos@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/22 17:36:28 by luisdos           #+#    #+#             */
/*   Updated: 2026/11/22 17:36:28 by luisdos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_strategy  ft_parse_strategy(const char *arg)
{
    if (!arg)
        return (STRATEGY_INVALID);
    if (ft_strncmp(arg, "--simple", 9) == 0)
        return (STRATEGY_SIMPLE);
    if (ft_strncmp(arg, "--medium", 9) == 0)
        return (STRATEGY_MEDIUM);
    if (ft_strncmp(arg, "--complex", 10) == 0)
        return (STRATEGY_COMPLEX);
    if (ft_strncmp(arg, "--adaptive", 11) == 0)
        return (STRATEGY_ADAPTIVE);
    return (STRATEGY_INVALID);
}

t_bench ft_is_bench_flag(const char *arg)
{
    if (!arg)
        return (BENCH_INVALID);
    if (ft_strncmp(arg, "--bench", 8) == 0)
        return (BENCH);
    return (BENCH_INVALID);
}