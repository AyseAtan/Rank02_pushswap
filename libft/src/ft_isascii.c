/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aatan <aatan@student.42berlin.de>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 12:37:30 by aatan             #+#    #+#             */
/*   Updated: 2024/02/12 14:43:50 by aatan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int	ft_isascii(int c)
{
	return (c >= 0 && c <= 127);
}
/*
#include <stdio.h>
#include <ctype.h>

int main ()
{
    int test1 = '5';
	int test2 = 178;

	printf("My Function:\n");
    printf("non ascii test: %d\n", ft_isascii(test1));
    printf("ascii test: %d\n", ft_isascii(test2));

	printf("Library:\n");
	printf("non ascii test: %d\n", isascii(test1));
    printf("ascii test: %d\n", isascii(test2));

    return 0;
}*/
