/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aatan <aatan@student.42berlin.de>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 12:39:53 by aatan             #+#    #+#             */
/*   Updated: 2024/02/12 14:45:50 by aatan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	if (!s || !f)
		return ;
	i = 0;
	while (*s)
	{
		f(i, s);
		i++;
		s++;
	}
}
/*
#include <stdio.h>

//void modifyCharacter(unsigned int index, char *c)
// Add 1 to the ASCII value of each character
//{
//    *c = *c + 1;
//}

static void toupperCase(unsigned int i, char *c)
{
    if (*c >= 'a' && *c <= 'z')
    {
        // Convert lowercase to uppercase
        *c = *c - 32;
    }
    else if (*c >= 'A' && *c <= 'Z')
    {
        // Convert uppercase to lowercase
        *c = *c;
    }
    (void)i;

}

int main()
{
    char testString[] = "hEllo";

    printf("Original string: %s\n", testString);

    // Applying ft_striteri with modifyCharacter function
    ft_striteri(testString, &toupperCase);

    printf("Modified string: %s\n", testString);

    return 0;
} */
