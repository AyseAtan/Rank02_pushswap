/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aatan <aatan@student.42berlin.de>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 12:43:58 by aatan             #+#    #+#             */
/*   Updated: 2024/02/12 14:46:35 by aatan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		c = c + 32;
	}
	return (c);
}
/*
#include <stdio.h>
#include <ctype.h>
int main ()
{
	char test = 'B';

	printf("before: %c\n", test);
	int result = ft_tolower(test);
	printf("after myfunction: %c\n", result);
	printf("after library: %c\n", tolower(test));

	return 0;
}*/
