/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aatan <aatan@student.42berlin.de>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 12:37:43 by aatan             #+#    #+#             */
/*   Updated: 2024/02/12 14:43:54 by aatan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int	ft_isdigit(int c)
{
	if (c < '0' || c > '9')
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
	int test2 = 'e';
	int test3 = '&';

	printf("My Function:\n");
    printf("digit test: %d\n", ft_isdigit(test1));
    printf("non digit test: %d\n", ft_isdigit(test2));
	printf("non digit test: %d\n", ft_isdigit(test3));

	printf("Library:\n");
	printf("digit test: %d\n", isdigit(test1));
    printf("non digit test: %d\n", isdigit(test2));
	printf("non digit test: %d\n", isdigit(test3));
    return 0;
}*/
