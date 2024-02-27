/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aatan <aatan@student.42berlin.de>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 16:37:36 by aatan             #+#    #+#             */
/*   Updated: 2024/02/16 16:16:17 by aatan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

int	stack_len(t_stack_node *stack)
{
	int	count;

	if (!stack)
		return (0);
	count = 0;
	while (stack)
	{
		++count;
		stack = stack->next;
	}
	return (count);
}

t_stack_node	*find_last_node(t_stack_node *head)
{
	if (NULL == head)
		return (NULL);
	while (head->next)
		head = head->next;
	return (head);
}

t_stack_node	*find_smallest(t_stack_node *stack)
{
	long			smallest;
	t_stack_node	*smallest_node;

	if (!stack)
		return (NULL);
	smallest = LONG_MAX;
	while (stack)
	{
		if (smallest > stack->num)
		{
			smallest = stack->num;
			smallest_node = stack;
		}
		stack = stack->next;
	}
	return (smallest_node);
}

t_stack_node	*find_biggest(t_stack_node *stack)
{
	long			biggest;
	t_stack_node	*biggest_node;

	if (!stack)
		return (NULL);
	biggest = LONG_MIN;
	while (stack)
	{
		if (biggest < stack->num)
		{
			biggest = stack->num;
			biggest_node = stack;
		}
		stack = stack->next;
	}
	return (biggest_node);
}

bool	stack_sorted(t_stack_node *stack)
{
	if (!stack)
		return (1);
	while (stack->next)
	{
		if (stack->num > stack->next->num)
			return (false);
		stack = stack->next;
	}
	return (true);
}
