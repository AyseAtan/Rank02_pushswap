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
/*
#include <stdio.h>
#include <string.h>

int main()
{
    const char str[] = "Hello, this is a test string.";
    int find = ' ';

    char *result = ft_strrchr(str, find);
    printf("My function: \n");
    if (result != NULL)
    {
        printf("Last position at: %ld\n", result - str);
    }
    else
    {
        printf("not found.\n");
    }
    char *lib = strrchr(str, find);
    printf("library: \n");
    if (lib != NULL)
    {
        printf("Last position at: %ld\n", lib - str);
    }
    else
    {
        printf("not found.\n");
    }

    return 0;
}*/
