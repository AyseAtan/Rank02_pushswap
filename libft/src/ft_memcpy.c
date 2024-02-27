/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aatan <aatan@student.42berlin.de>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 12:38:29 by aatan             #+#    #+#             */
/*   Updated: 2024/02/27 16:14:13 by aatan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t				i;
	unsigned char		*dst_bytes;
	const unsigned char	*src_bytes;

	i = 0;
	if (dst == NULL && src == NULL)
		return (dst);
	dst_bytes = dst;
	src_bytes = src;
	while (i < n)
	{
		dst_bytes[i] = src_bytes[i];
		i++;
	}
	return (dst);
}
