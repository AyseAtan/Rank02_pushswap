/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aatan <aatan@student.42berlin.de>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 12:39:41 by aatan             #+#    #+#             */
/*   Updated: 2024/02/12 14:45:45 by aatan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char	*ft_strdup(const char *str)
{
	char	*duplicate;
	size_t	len;

	len = ft_strlen(str) + 1;
	duplicate = (char *)malloc((len) * sizeof(char));
	if (!duplicate)
		return (0);
	if (duplicate != NULL)
	{
		ft_memcpy(duplicate, str, len);
	}
	return (duplicate);
}
