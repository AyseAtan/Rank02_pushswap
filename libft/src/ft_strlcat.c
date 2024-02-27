/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aatan <aatan@student.42berlin.de>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 12:43:27 by aatan             #+#    #+#             */
/*   Updated: 2024/02/12 14:45:57 by aatan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t destsize)
{
	size_t	length_d;
	size_t	length_s;
	size_t	i;

	i = 0;
	length_d = ft_strlen(dest);
	length_s = ft_strlen(src);
	if (length_d >= destsize || destsize == 0)
		return (destsize + length_s);
	while (src[i] != '\0' && i < destsize - length_d - 1)
	{
		dest[length_d + i] = src[i];
		i++;
	}
	dest[length_d + i] = '\0';
	return (length_d + length_s);
}
/*
//#include <bsd/string.h>
#include <stdio.h>
//have to use -lbsd when compiling!
int main()
{
	char dest[8] = "Hello, ";
	char src[] = "peer!";
	size_t buffer = 2; //destination buffer
	printf("%zu\n", ft_strlcat(dest, src, buffer));
	//printf("%s", dest);
	return 0;
}*/
