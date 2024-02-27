/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aatan <aatan@student.42berlin.de>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 12:36:12 by aatan             #+#    #+#             */
/*   Updated: 2024/02/12 14:42:37 by aatan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int	ft_atoi(const char *str)
{
	int	i;
	int	result;
	int	sign;

	i = 0;
	result = 0;
	sign = 1;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	if (str[i] == '-' || str[i] == '+' )
	{
		if (str[i] == '-')
			sign = -sign;
		i++;
	}
	while (str[i] && str[i] >= '0' && str[i] <= '9')
	{
		result *= 10;
		result += str[i] - '0';
		i++;
	}
	result *= sign;
	return (result);
}
/*
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void test_ft_atoi(char *str)
{
    int result = ft_atoi(str);
    printf("My function: Input: \"%s\", Output: %d\n", str, result);
	int test = atoi(str);
	printf("Library: Input: \"%s\", Output: %d\n\n", str, test);
}
int main()
{
    // Test cases with regular numbers
    test_ft_atoi("12a345");
    test_ft_atoi("--987a65");
    test_ft_atoi("+54dd321");
    test_ft_atoi("0");
	test_ft_atoi("-9"); //single digits
	test_ft_atoi("9");
    test_ft_atoi("   6789");
    test_ft_atoi("    -555");
    // Test cases with invalid inputs
    test_ft_atoi("hello");
    test_ft_atoi(" 123abc");
    test_ft_atoi("  + 123");
    test_ft_atoi("+-123");
    test_ft_atoi("");
	test_ft_atoi("+abc");
	test_ft_atoi("-abc");
    // Test cases with overflow
    test_ft_atoi("2147483647");     // INT_MAX
    test_ft_atoi("-2147483648");    // INT_MIN
    test_ft_atoi("2147483648");     // Overflow for signed 32-bit integer
    test_ft_atoi("-2147483649");    // Overflow for signed 32-bit integer
    //
	test_ft_atoi("00123");
	test_ft_atoi("123  ");
	test_ft_atoi("");
	return 0;
}*/
