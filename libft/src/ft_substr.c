/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aatan <aatan@student.42berlin.de>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 12:44:11 by aatan             #+#    #+#             */
/*   Updated: 2024/02/12 14:46:31 by aatan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*substr;

	i = 0;
	if (!s)
		return (NULL);
	if (start > (unsigned) ft_strlen(s))
		return (ft_strdup(""));
	if (len > ft_strlen(s) - start)
		len = ft_strlen(s) - start;
	substr = malloc((len + 1) * sizeof(char));
	if (!substr)
		return (NULL);
	while (i < len)
	{
		substr[i] = s[start + i];
		i++;
	}
	substr[len] = '\0';
	return (substr);
}
/*
int main()
{
    const char *teststring = "Hello, here is the substring!";
    unsigned int start_index = 7;
    size_t length = 12;

    char *result = ft_substr(teststring, start_index, length);
    printf("Myfunction:\n");
    if (result != NULL)
    {
        // Print or use the resulting substring
        printf("Substring: %s\n", result);

        // Don't forget to free the allocated memory when done
        free(result);
    } else
    {

		printf("Memory allocation failure or invalid input.\n");
	}


    return 0;
}*/
