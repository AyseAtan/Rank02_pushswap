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
/*
#include <stdio.h>
#include <string.h>

int main()
{
    char str[] = "Hello, this is a test string.";
    int find = 'e';

    char *result = ft_strchr(str, find);
    printf("My Function: \n");
    if (result != NULL)
    {
        printf("Found at position: %ld\n", result - str);
    }
    else
    {
        printf("not found.\n");
    }

    char *lib = strchr(str, find);
    printf("Library: \n");
    if (lib != NULL)
    {
        printf("Found at position: %ld\n", lib - str);
    }
    else
    {
        printf("not found.\n");
    }

    return 0;
}*/
