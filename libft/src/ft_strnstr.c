/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aatan <aatan@student.42berlin.de>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 12:41:20 by aatan             #+#    #+#             */
/*   Updated: 2024/02/12 14:46:18 by aatan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char	*ft_strnstr(const char *str, const char *to_find, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (to_find[0] == 0)
		return ((char *) str);
	while (str[i] != '\0' && i < len)
	{
		while (str[i + j] == to_find[j] && (str[i + j] != '\0')
			&& i + j < len)
		{
			j++;
			if (to_find[j] == '\0')
				return ((char *)(str + i));
		}
		i++;
		j = 0;
	}
	return (NULL);
}
