/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aatan <aatan@student.42berlin.de>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 12:41:08 by aatan             #+#    #+#             */
/*   Updated: 2024/02/12 14:46:14 by aatan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char	*ft_strmapi(const char *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	size_t			len;
	char			*result;

	len = ft_strlen(s);
	if (!s || !f)
		return (NULL);
	result = (char *)malloc(len + 1);
	if (!result)
		return (NULL);
	i = 0;
	while (i < len)
	{
		result[i] = f(i, s[i]);
		i++;
	}
	result[len] = '\0';
	return (result);
}
/*

static char transformToUpperCase(unsigned int index, char c)
{
    // Check if c is a lowercase letter before converting
    if (c >= 'a' && c <= 'z') {
        // Convert to uppercase
        return c - 'a' + 'A';
    } else {
        // Return unchanged for non-lowercase characters
        return c;
    }
}

int main()
{
    const char *input = "Hello, World!";
    char *result = ft_strmapi(input, transformToUpperCase);

    if (result)
    {
        printf("Original: %s\n", input);
        printf("Transformed: %s\n", result);

        // Don't forget to free the memory when done
        free(result);
    }
    return 0;
}*/
