/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aatan <aatan@student.42berlin.de>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 12:42:18 by aatan             #+#    #+#             */
/*   Updated: 2024/02/12 14:44:55 by aatan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	size_t	i;
	char	*dst_bytes;
	char	*src_bytes;

	i = 0;
	dst_bytes = (char *) dst;
	src_bytes = (char *) src;
	if (!dst && !src)
		return (NULL);
	if (dst_bytes > src_bytes)
		while (n-- > 0)
			dst_bytes[n] = src_bytes[n];
	else
	{
		while (i < n)
		{
			dst_bytes[i] = src_bytes[i];
			i++;
		}
	}
	return (dst);
}
