/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aatan <aatan@student.42berlin.de>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 12:41:34 by aatan             #+#    #+#             */
/*   Updated: 2024/02/12 14:46:22 by aatan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char	*ft_strrchr(const char *str, int find)
{
	int	i;

	i = ft_strlen (str);
	while (i >= 0)
	{
		if (str[i] == (unsigned char) find)
		{
			return ((char *)str + i);
		}
		i--;
	}
	return (0);
}
