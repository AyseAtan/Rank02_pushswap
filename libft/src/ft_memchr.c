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
/*
#include <string.h>
#include <stdio.h>
int main()

{
    const char src[]="this is a Test string.";
    char c;
    int n;

    c = 'T';
    n = strlen(src);

    printf("My Function:\n");
    const void *result = ft_memchr(src, c, n);
    if (result)
        {
            printf(" '%c' found at position: %ld\n", c, (char *)result - src);
        }
    else
        {
            printf(" '%c' not found in the string.\n", c);
        }
    printf("Library:\n");
    const void *test = memchr(src, c, n);
    if (test)
        {
            printf(" '%c' found at position: %ld\n", c, (char *)test - src);
        }
        else
        {
            printf("'%c' not found in the string.\n", c);
        }
    return 0;
}*/
