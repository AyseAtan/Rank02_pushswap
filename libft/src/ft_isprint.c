/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aatan <aatan@student.42berlin.de>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 12:37:53 by aatan             #+#    #+#             */
/*   Updated: 2024/02/12 14:43:58 by aatan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int	ft_isprint(int c)
{
	if (c < 32 || c > 126)
	{
		return (0);
	}
	return (1);
}
/*
#include <stdio.h>
#include <ctype.h>
int main ()
{
	int test1 = '5';
	int test2 = '\n';

	printf("My Function:\n");
    printf("print test: %d\n", ft_isprint(test1));
	printf("non print test: %d\n", ft_isprint(test2));

	printf("Library:\n");
	printf("print test: %d\n", isprint(test1));
	printf("non print test: %d\n", isprint(test2));
    return 0;
}*/
