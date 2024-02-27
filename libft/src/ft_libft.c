/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_libft.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aatan <aatan@student.42berlin.de>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 15:14:37 by aatan             #+#    #+#             */
/*   Updated: 2024/02/16 16:26:31 by aatan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int	ft_putchar_p(char c)
{
	return (write(1, &c, 1));
}

int	ft_putnbr_p(int n)
{
	int	count;

	count = 0;
	if (n == -2147483648)
		count += ft_putstr_p("-2147483648");
	else if (n < 0)
	{
		count += ft_putchar_p('-');
		count += ft_putnbr_p(-n);
	}
	else if (n >= 10)
	{
		count += ft_putnbr_p(n / 10);
		count += ft_putchar_p(n % 10 + '0');
	}
	else
	{
		count += ft_putchar_p(n + '0');
	}
	return (count);
}

int	ft_putstr_p(char *s)
{
	if (!s)
		return (-1);
	return (write(1, s, ft_strlen(s)));
}

int	ft_puthexa_p(unsigned long nb, char var)
{
	int	count;

	count = 0;
	if (nb >= 16)
	{
		count += ft_puthexa_p(nb / 16, var);
		count += ft_puthexa_p(nb % 16, var);
	}
	else
	{
		if (nb <= 9)
		{
			count += ft_putchar_p(nb + '0');
		}
		else
		{
			if (var == 'x')
				count += ft_putchar_p(nb % 10 + 'a');
			if (var == 'X')
				count += ft_putchar_p(nb % 10 + 'A');
		}
	}
	return (count);
}
