/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aatan <aatan@student.42berlin.de>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 12:42:58 by aatan             #+#    #+#             */
/*   Updated: 2024/02/12 14:46:38 by aatan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		c = c - 32;
	}
	return (c);
}
/*
#include <stdio.h>
#include <ctype.h>
int main ()
{
	char test = 'b';

	printf("before: %c\n", test);
	int result = ft_toupper(test);
	printf("after myfunction: %c\n", result);
	printf("after library: %c\n", toupper(test));

	return 0;
}
*/
