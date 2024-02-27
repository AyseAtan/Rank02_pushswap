/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aatan <aatan@student.42berlin.de>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 12:39:13 by aatan             #+#    #+#             */
/*   Updated: 2024/02/12 14:45:18 by aatan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	while (*s)
	{
		write(fd, s, 1);
		s++;
	}
}
/*

static void test_ft_putstr_fd()
{
    // Open a file or use another valid file descriptor
    int fileDescriptor = 1; // 1 represents standard output (stdout)

    // Characters to write
    char str[] = "Teststring.";

    // Write each character to the file descriptor using ft_putchar_fd
    ft_putstr_fd(str, fileDescriptor);

}

int main()
{
    test_ft_putstr_fd();

    return 0;
}*/
