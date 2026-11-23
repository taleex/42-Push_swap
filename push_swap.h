/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: username <username@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/20 16:42:08 by username          #+#    #+#             */
/*   Updated: 2026/11/23 10:51:09 by username         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "ft_printf/ft_printf.h"
# include "ft_printf/libft/libft.h"
# include <stdlib.h>
# include <limits.h>

typedef struct s_node
{
	int				value;
	int				index;
	struct s_node	*next;
	struct s_node	*prev;
}	t_node;

typedef struct s_stack
{
	t_node	*bottom;
	t_node	*top;
	int		size;
}	t_stack;

typedef enum e_strategy
{
	STRATEGY_INVALID,
	STRATEGY_SIMPLE,
	STRATEGY_MEDIUM,
	STRATEGY_COMPLEX,
	STRATEGY_ADAPTIVE
}	t_strategy;

typedef enum e_bench
{
	BENCH_INVALID,
	BENCH
}	t_bench;

typedef struct s_options
{
	t_strategy	strategy;
	t_bench		bench;
	int			first_number;
}	t_options;

//parse choice
void		ft_parse_args(int argc, char **argv, t_options *options);

//Stack initialization
int			ft_stack_build(t_stack *stack, char **numbers);

//Strategy
t_strategy	ft_parse_strategy(const char *arg);

//Bench check
t_bench		ft_is_bench_flag(const char *arg);

//Error handling
void		ft_error_exit(void);
int			ft_is_integer_format(const char *str);
int			ft_is_integer_range(const char *str);
int			ft_has_duplicates(char **numbers);

//Stack helpers
void		ft_stack_init(t_stack *stack);
t_node		*ft_node_new(int value);
void		ft_stack_add_back(t_stack *stack, t_node *node);
void		ft_stack_clear(t_stack *stack);

//Swap functions
void		ft_swap_top(t_stack *stack);
void		ft_sa(t_stack *a);
void		ft_sb(t_stack *b);
void		ft_ss(t_stack *a, t_stack *b);

//Push functions
void		pa(t_stack *a, t_stack *b);
void		pb(t_stack *a, t_stack *b);

//Rotate functions.
void		ft_ra(t_stack *a);
void		ft_rb(t_stack *b);
void		ft_rr(t_stack *a, t_stack *b);

//Reverse rotate functions.
void		ft_rra(t_stack *a);
void		ft_rrb(t_stack *b);
void		ft_rrr(t_stack *a, t_stack *b);
#endif
