/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aatan <aatan@student.42berlin.de>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 12:42:10 by aatan             #+#    #+#             */
/*   Updated: 2024/02/12 14:44:49 by aatan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*s1_byte;
	const unsigned char	*s2_byte;
	size_t				i;

	i = 0;
	s1_byte = s1;
	s2_byte = s2;
	while (i < n)
	{
		if (s1_byte[i] != s2_byte[i])
			return (s1_byte[i] - s2_byte[i]);
		i++;
	}
	return (0);
}
/*
#include <stdio.h>
#include <string.h>
#include <unistd.h>
int main ()
{
	char *s1= "";
	char *s2= "";
	unsigned int n;
	int result;
	int lib;

	n = strlen(s1);
	printf("My Function:\n");
	result = ft_memcmp(s1, s2, n);
	if (result == 0)
	    printf("equal\n");
	else if(result <0)
	    printf("s1<s2\n");
	else {printf("s1>s2\n");}

	printf("Library:\n");
	lib = memcmp(s1, s2, n);
	if (lib == 0)
	    printf("equal\n");
	else if(lib <0)
	    printf("s1<s2\n");
	else {printf("s1>s2\n");}

	return (0);
}*/
