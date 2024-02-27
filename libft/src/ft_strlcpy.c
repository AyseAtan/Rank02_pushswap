/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aatan <aatan@student.42berlin.de>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 12:43:58 by aatan             #+#    #+#             */
/*   Updated: 2024/02/12 14:46:02 by aatan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t destsize)
{
	size_t	i;
	size_t	src_len;

	src_len = ft_strlen(src);
	if (destsize)
	{
		i = 0;
		while (i < (destsize - 1) && src[i] != '\0')
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (src_len);
}
/*
#include <stdio.h>
#include <stddef.h>
#include <string.h>

int main()
{
    const char *text = "Hello, ChatGPT!";

    // Calculate the length of the string using strlen
	size_t textLength = strlen(text);

    // Print the original string and its length
    printf("Original String: %s\n", text);
    printf("Length using strlen: %zu\n", textLength);

    // Create a buffer to copy the string using ft_strlcpy
    char buffer[20];

    // Test the ft_strlcpy function
    size_t copiedLength = ft_strlcpy(buffer, text, sizeof(buffer));
	printf("My Function: \n");
    // Print the copied string and its length
    printf("Copied String: %s\n", buffer);
    printf("Length using ft_strlcpy: %zu\n", copiedLength);

	size_t libLength = strlcpy(buffer, text, sizeof(buffer));
	printf("Library: \n");
    // Print the copied string and its length
    printf("Copied String: %s\n", buffer);
    printf("Length using ft_strlcpy: %zu\n", libLength);

    return 0;
}*/
