/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aatan <aatan@student.42berlin.de>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 12:38:41 by aatan             #+#    #+#             */
/*   Updated: 2024/02/12 14:44:59 by aatan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	*ft_memset(void *str, int c, size_t n)
{
	size_t			i;
	unsigned char	*p;

	i = 0;
	p = (unsigned char *)str;
	while (i < n)
	{
		*p = (unsigned char)c;
		p++;
		i++;
	}
	return (str);
}
/*
#include <string.h>
int main()

{
    int str[4];
    int c;
    size_t n;

    c = '2';
    n = sizeof(str);
    printf("My Function:\n");
    ft_memset(str, c, n);
    for (size_t i = 0; i < sizeof(str)/sizeof(int); i++)
        {
            printf("str[%zu] = %c\n", i, str[i]);
        }

    memset(str, c, n);
    printf("Library:\n");
    for (size_t i = 0; i < sizeof(str)/sizeof(int); i++)
        {
            printf("str[%zu] = %c\n", i, str[i]);
        }
    return 0;
}*/
