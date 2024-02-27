/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aatan <aatan@student.42berlin.de>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/16 16:20:01 by aatan             #+#    #+#             */
/*   Updated: 2024/02/27 15:18:42 by aatan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdbool.h>
# include <limits.h>
# include "libft/libft.h"

typedef struct s_stack_node
{
	int					num;
	int					index;
	int					push_cost;
	bool				above_median;
	bool				cheapest;
	struct s_stack_node	*target_node;
	struct s_stack_node	*next;
	struct s_stack_node	*prev;
}	t_stack_node;

/**Handle errors**/
int				error_syntax(char *str_n);
int				error_duplicate(t_stack_node *a, int n);
void			free_stack(t_stack_node *stack);
void			free_errors(t_stack_node **a, char **argv);
void			free_argv(char **argv);

/**Stack initiation**/
void			stack_init(t_stack_node **a, char **argv);
char			**split(char *s, char c);

/**Nodes initiation**/
void			init_nodes_a(t_stack_node *a, t_stack_node *b);
void			init_nodes_b(t_stack_node *a, t_stack_node *b);
void			current_index(t_stack_node *stack);
void			set_cheapest(t_stack_node *stack);
t_stack_node	*find_cheapest(t_stack_node *stack);
void			prep_for_push(t_stack_node **s, t_stack_node *n, char c);

/**Stack utils**/
int				stack_len(t_stack_node *stack);
t_stack_node	*find_last_node(t_stack_node *stack);
bool			stack_sorted(t_stack_node *stack);
t_stack_node	*find_smallest(t_stack_node *stack);
t_stack_node	*find_biggest(t_stack_node *stack);
void			min_on_top(t_stack_node **a);

/**Commands**/
void			sa(t_stack_node **a, bool print);
void			sb(t_stack_node **b, bool print);
void			ss(t_stack_node **a, t_stack_node **b, bool print);
void			ra(t_stack_node **a, bool print);
void			rb(t_stack_node **b, bool print);
void			rr(t_stack_node **a, t_stack_node **b, bool print);
void			rra(t_stack_node **a, bool print);
void			rrb(t_stack_node **b, bool print);
void			rrr(t_stack_node **a, t_stack_node **b, bool print);
void			pa(t_stack_node **a, t_stack_node **b, bool print);
void			pb(t_stack_node **b, t_stack_node **a, bool print);

/**Algorithm**/
void			sort_three(t_stack_node **a);
void			sort_stacks(t_stack_node **a, t_stack_node **b);

#endif
