/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aatan <aatan@student.42berlin.de>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 12:42:01 by aatan             #+#    #+#             */
/*   Updated: 2024/02/12 14:44:02 by aatan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

size_t	numlen(int n)
{
	size_t	length;

	length = 0;
	if (n <= 0)
		length++;
	while (n != 0)
	{
		n = n / 10;
		length++;
	}
	return (length);
}

char	*ft_itoa(int n)
{
	size_t	length;
	char	*result;
	long	nb;

	nb = n;
	length = numlen (n);
	result = (char *) malloc(length + 1);
	if (!result)
		return (NULL);
	if (nb < 0)
	{
		result[0] = '-';
		nb = -nb;
	}
	result[length--] = '\0';
	if (nb == 0)
		result[0] = '0';
	while (nb != 0)
	{
		result[length--] = nb % 10 + '0';
		nb = nb / 10;
	}
	return (result);
}
