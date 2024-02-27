/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aatan <aatan@student.42berlin.de>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 12:42:29 by aatan             #+#    #+#             */
/*   Updated: 2024/02/12 14:45:14 by aatan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	if (fd < 0 || n > 2147483647 || n < -2147483648)
	{
		return ;
	}
	if (n == -2147483648)
	{
		write(fd, "-2147483648", 11);
		return ;
	}
	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		n = -n;
	}
	if (n > 9)
	{
		ft_putnbr_fd(n / 10, fd);
	}
	ft_putchar_fd(n % 10 + '0', fd);
}
/*int main()
{
    //int number = 2147483648;
    int number = -2147483648;
    int fileDescriptor = 1; //fd=1 standard output

    ft_putnbr_fd(number, fileDescriptor);

    return 0;
}*/
