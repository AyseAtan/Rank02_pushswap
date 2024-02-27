/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aatan <aatan@student.42berlin.de>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 12:37:03 by aatan             #+#    #+#             */
/*   Updated: 2024/02/12 14:43:44 by aatan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int	ft_isalnum(int c)
{
	if ((c < 'A' || c > 'Z') && (c < 'a' || c > 'z') && (c < '0' || c > '9'))
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
    printf("alnum test: %d\n", ft_isalnum(test1));
    printf("alnum test: %d\n", ft_isalnum(test2));
	printf("non alnum test: %d\n", ft_isalnum(test3));

	printf("Library:\n");
	printf("alnum test: %d\n", isalnum(test1));
    printf("alnum test: %d\n", isalnum(test2));
	printf("non alnum test: %d\n", isalnum(test3));
    return 0;
}*/
