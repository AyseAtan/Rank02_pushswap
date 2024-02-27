/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aatan <aatan@student.42berlin.de>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 12:42:10 by aatan             #+#    #+#             */
/*   Updated: 2024/02/12 14:44:49 by aatan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*s1_byte;
	const unsigned char	*s2_byte;
	size_t				i;

	i = 0;
	s1_byte = s1;
	s2_byte = s2;
	while (i < n)
	{
		if (s1_byte[i] != s2_byte[i])
			return (s1_byte[i] - s2_byte[i]);
		i++;
	}
	return (0);
}
