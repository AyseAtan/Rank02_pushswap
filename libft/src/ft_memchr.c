/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aatan <aatan@student.42berlin.de>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 12:38:17 by aatan             #+#    #+#             */
/*   Updated: 2024/02/12 14:44:45 by aatan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	*ft_memchr(const void *src, int c, size_t n)
{
	size_t				i;
	const unsigned char	*src_bytes;
	unsigned char		uc;

	i = 0;
	src_bytes = src;
	uc = c;
	while (i < n)
	{
		if (src_bytes[i] == uc)
			return ((void *) &src_bytes[i]);
		i++;
	}
	return (NULL);
}
