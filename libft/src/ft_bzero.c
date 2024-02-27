/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aatan <aatan@student.42berlin.de>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 12:41:56 by aatan             #+#    #+#             */
/*   Updated: 2024/02/12 14:43:35 by aatan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	ft_bzero(void *str, size_t n)
{
	size_t			i;
	unsigned char	*p;

	i = 0;
	p = (unsigned char *)str;
	while (i < n)
	{
		*p = 0;
		p++;
		i++;
	}
}
/*
#include <string.h>
int main()

{
    int str[10];
    int c;
    size_t n;

    c = -2;
    n = sizeof(str);
    ft_bzero(str, n);
    printf("My Function:\n");
    for (size_t i = 0; i < sizeof(str)/sizeof(int); i++)
        {
            printf("str[%zu] = %d\n", i, str[i]);
        }

    bzero(str, n);
    printf("Library:\n");
    for (size_t i = 0; i < sizeof(str)/sizeof(int); i++)
        {
            printf("str[%zu] = %d\n", i, str[i]);
        }
    return 0;
}*/
