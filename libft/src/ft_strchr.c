/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aatan <aatan@student.42berlin.de>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 12:39:27 by aatan             #+#    #+#             */
/*   Updated: 2024/02/12 14:45:40 by aatan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char	*ft_strchr(const char *str, int find)
{
	while (*str != '\0' && *str != (unsigned char) find)
		str++;
	if (*str == (unsigned char)find)
		return ((char *) str);
	return (0);
}
