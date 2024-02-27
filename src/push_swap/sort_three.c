/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_three.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aatan <aatan@student.42berlin.de>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/16 16:17:15 by aatan             #+#    #+#             */
/*   Updated: 2024/02/16 16:29:02 by aatan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

void	sort_three(t_stack_node **a)
{
	t_stack_node	*biggest_node;

	biggest_node = find_biggest(*a);
	if (*a == biggest_node)
		ra(a, false);
	else if ((*a)->next == biggest_node)
		rra(a, false);
	if ((*a)->num > (*a)->next->num)
		sa(a, false);
}

void	min_on_top(t_stack_node **a)
{
	while ((*a)->num != find_smallest(*a)->num)
	{
		if (find_smallest(*a)->above_median)
			ra(a, false);
		else
			rra(a, false);
	}
}
