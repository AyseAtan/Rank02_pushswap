/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aatan <aatan@student.42berlin.de>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 16:38:29 by aatan             #+#    #+#             */
/*   Updated: 2024/02/16 13:24:11 by aatan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

static void	push(t_stack_node **dst, t_stack_node **src)
{
	t_stack_node	*push_node;

	if (!*src)
		return ;
	push_node = *src;
	*src = (*src)->next;
	if (*src)
		(*src)->prev = NULL;
	push_node->prev = NULL;
	if (!*dst)
	{
		*dst = push_node;
		push_node->next = NULL;
	}
	else
	{
		push_node->next = *dst;
		push_node->next->prev = push_node;
		*dst = push_node;
	}
}

void	pa(t_stack_node **a, t_stack_node **b, bool checker)
{
	push(a, b);
	if (!checker)
		ft_printf("pa\n");
}

void	pb(t_stack_node **b, t_stack_node **a, bool checker)
{
	push(b, a);
	if (!checker)
		ft_printf("pb\n");
}
