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
/*
#include <stdio.h>
int main ()
{
	const char *original = "Hello, World!";
    char *duplicate = ft_strdup(original);

    printf("My Function: \n");
    if (duplicate != NULL)
    {
        printf("Original: %s\n", original);
        printf("Duplicate: %s\n", duplicate);

        // Remember to free the memory when done using it
        free(duplicate);
    }
    else
    {
        printf("Memory allocation failed.\n");
    }

    char *lib = strdup(original);

    printf("Library: \n");
    if (lib != NULL)
    {
        printf("Original: %s\n", original);
        printf("Duplicate: %s\n", lib);

        // Remember to free the memory when done using it
        free(lib);
    }
    else
    {
        printf("Memory allocation failed.\n");
    }


    return 0;
}*/
