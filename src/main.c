/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aatan <aatan@student.42berlin.de>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/16 12:54:30 by aatan             #+#    #+#             */
/*   Updated: 2024/02/27 16:14:34 by aatan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

 char** argvcopy(int argc, char **argv)
{
	char	**copy;
	size_t	i = 0;

	copy = (char**)ft_calloc(argc, sizeof(argv));
	if (!copy)
		free_argv(copy);
	while (argv[i])
	{
		copy[i] = ft_strdup(argv[i]);
		i++;
	}
	copy[i] = NULL;
	return (copy);
}

int	main(int argc, char **argv)
{
	t_stack_node	*a;
	t_stack_node	*b;

	a = NULL;
	b = NULL;
	if (argc == 1 || (argc == 2 && !argv[1][0]))
		return (1);
	else if (argc == 2)
		argv = split(argv[1], ' ');
	else
		argv = argvcopy(argc, &argv[1]);
	if (!argv)
		return (1);
	stack_init(&a, argv);
	if (!stack_sorted(a))
	{
		if (stack_len(a) == 2)
			sa(&a, false);
		else if (stack_len(a) == 3)
			sort_three(&a);
		else
			sort_stacks(&a, &b);
	}
	if (argc == 2)
		free_argv(argv);
	free_stack(a);
	return (0);
}
