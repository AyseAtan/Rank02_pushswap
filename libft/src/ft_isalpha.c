/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aatan <aatan@student.42berlin.de>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 12:37:17 by aatan             #+#    #+#             */
/*   Updated: 2024/02/12 14:42:40 by aatan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int	ft_isalpha(int c)
{
	if ((c < 65 || c > 90) && (c < 97 || c > 122))
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

	printf("My Function:\n");
    printf("non alpha test: %d\n", ft_isalpha(test1));
    printf("alpha test: %d\n", ft_isalpha(test2));

	printf("Library:\n");
	printf("non alpha test: %d\n", isalpha(test1));
    printf("alpha test: %d\n", isalpha(test2));

    return 0;
}*/
