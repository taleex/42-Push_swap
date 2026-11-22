/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_error.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luisdos <luisdos@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/22 15:34:02 by luisdos           #+#    #+#             */
/*   Updated: 2026/11/22 15:34:02 by luisdos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

//Displays the error message with \n
void    ft_error_exit(void)
{
    ft_putendl_fd("Error", 2);
    exit(1);
}
//Checks if it is an int
int ft_is_integer_format(const char *str)
{
    int i;

    i = 0;
    if (!str)
        return (0);
    if (str[i] == '+'|| str[i] == '-')
        i++;
    if (str[i] == '\0')
        return (0);
    while (str[i] != '\0')
    {
        if (!ft_isdigit(str[i]))
            return (0);
        i++;
    }
    return (1);
}

//Checks if it fits in an int
int	ft_is_integer_range(const char *str)
{
    long long   number;
    int i;
    int sign;

    number = 0;
    i = 0;
    sign = 1;
    if (str[i] == '-')
        sign = -1;
    if (str[i] == '+' || str[i] == '-')
        i++;
    while (str[i] != '\0')
    {
        number = number * 10 + (str[i] - '0');
        if (number * sign < INT_MIN || number * sign > INT_MAX)
            return (0);
        i++;
    }
    return (1);
}

//check if there are duplicates
int ft_has_duplicates(char **numbers)
{
    int i;
    int j;

    i = 0;
    while (numbers[i] != NULL)
    {
        j = i + 1;
        while (numbers[j] != NULL)
        {
            if (ft_atoi(numbers[i]) == ft_atoi(numbers[j]))
                return (1);
            j++;
        }
        i++;
    }
    return (0);
}