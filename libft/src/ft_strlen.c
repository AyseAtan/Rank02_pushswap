/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aatan <aatan@student.42berlin.de>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 12:40:53 by aatan             #+#    #+#             */
/*   Updated: 2024/02/12 14:46:06 by aatan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

size_t	ft_strlen(const char *str)
{
	int	index;

	index = 0;
	while (str[index] != '\0')
	{
		index++;
	}
	return (index);
}
/*
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
	char *str="Hello Pisciners!";
	printf("String: %s\n", str);
	printf("My Function Stringlength: %d\n", ft_strlen(str));
	printf("Library Stringlength: %lu\n", strlen(str));
}*/
