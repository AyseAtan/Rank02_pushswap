/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aatan <aatan@student.42berlin.de>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 12:40:33 by aatan             #+#    #+#             */
/*   Updated: 2024/02/12 14:45:54 by aatan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	len_s1;
	size_t	len_s2;
	char	*result;

	len_s1 = ft_strlen (s1);
	len_s2 = ft_strlen (s2);
	if (s1 == NULL || s2 == NULL)
		return (NULL);
	result = (char *)malloc((len_s1 + len_s2 + 1) * sizeof(char));
	if (result == NULL)
		return (NULL);
	ft_memmove (result, s1, len_s1);
	ft_memmove (result + len_s1, s2, len_s2);
	result[len_s1 + len_s2] = '\0';
	return (result);
}
