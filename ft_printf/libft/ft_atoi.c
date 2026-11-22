/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorgferr <jorgferr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/19 11:55:07 by jorgferr          #+#    #+#             */
/*   Updated: 2026/11/13 10:27:50 by jorgferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <limits.h>

static int	ft_parse_digits(const char *str, int sign)
{
	long	result;
	int		digit;

	result = 0;
	while (*str >= '0' && *str <= '9')
	{
		digit = *str - '0';
		if (result > (LONG_MAX - digit) / 10)
		{
			if (sign < 0)
				return ((int)LONG_MIN);
			return ((int)LONG_MAX);
		}
		result = result * 10 + digit;
		str++;
	}
	return ((int)(result * sign));
}

int	ft_atoi(const char *str)
{
	size_t	i;
	int		sign;

	i = 0;
	sign = 1;
	while ((str[i] == ' ') || (str[i] >= 9 && str[i] <= 13))
		i++;
	if ((str[i] == '+') || (str[i] == '-'))
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	return (ft_parse_digits(str + i, sign));
}
