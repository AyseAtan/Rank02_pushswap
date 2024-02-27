/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aatan <aatan@student.42berlin.de>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 12:36:32 by aatan             #+#    #+#             */
/*   Updated: 2024/02/12 14:43:40 by aatan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	*ft_calloc(size_t num_elements, size_t element_size)
{
	size_t	total_size;
	void	*ptr;

	total_size = num_elements * element_size;
	ptr = malloc(total_size);
	if (ptr == NULL)
		return (NULL);
	if (ptr != NULL)
		ft_memset(ptr, 0, total_size);
	return (ptr);
}
/*
int main()
{
    size_t num_elements = 5;
    size_t element_size = sizeof(int);

    // Allocate memory for an array of 5 integers and initialize to zero
    printf("My Function:\n");
    int* result = (int*)ft_calloc(num_elements, element_size);
    // Check if allocation was successful
    if (result != NULL)
    {
        // Use the allocated memory
        for (size_t i = 0; i < 5; ++i)
        {
            result[i] = i + 1; // Assign values 1 to 5
        }

        // Print the content of the array
        for (size_t i = 0; i < 5; ++i)
        {
            printf("%d\n", result[i]);
        }
        free(result);
    }
    else
    {
        printf("Memory allocation failed.\n");
    }

    printf("Library:\n");
    int* lib = (int*)calloc(num_elements, element_size);

    if (lib != NULL)
    {
        for (size_t i = 0; i < 5; ++i)
        {
            lib[i] = i + 1;
        }
        for (size_t i = 0; i < 5; ++i)
        {
            printf("%d\n", lib[i]);
        }
        free(lib);
    }
    else
    {
        printf("Memory allocation failed.\n");
    }

    return 0;
}*/
