/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aatan <aatan@student.42berlin.de>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 12:43:49 by aatan             #+#    #+#             */
/*   Updated: 2024/02/12 14:46:09 by aatan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while ((s1[i] != '\0' || (s2[i] != '\0')) && i < n)
	{
		if (s1[i] != s2[i])
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		i++;
	}
	return (0);
}
/*
#include <string.h>
#include <stdio.h>

int main ()
{
	char s1[] = "";
	char s2[] = "";
	size_t result;
	size_t lib;
	size_t n;

	n = 2;

	printf("My Function: \n");
	result = ft_strncmp(s1, s2, n);
	if (result == 0)
		{printf("equal \n");}
	else if(result <0)
		{printf("s1<s2 \n");}
	else
		{printf("s1>s2 \n");}

	printf("Library: \n");
	lib = strncmp(s1, s2, n);
	if (lib == 0)
		{printf("equal \n");}
	else if (lib < 0)
		{printf("s1<s2 \n");}
	else
		{printf("s1>s2 \n");}

	return (0);
}*/
