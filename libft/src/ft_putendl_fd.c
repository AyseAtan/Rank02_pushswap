/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aatan <aatan@student.42berlin.de>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 12:39:03 by aatan             #+#    #+#             */
/*   Updated: 2024/02/12 14:45:10 by aatan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	while (*s)
	{
		write(fd, s, 1);
		s++;
	}
	write (fd, "\n", 1);
}
/*

static void test_ft_putendl_fd()
{
    // Open a file or use another valid file descriptor
    int fileDescriptor = 1; // 1 represents standard output (stdout)

    // Characters to write
    char str[] = "Teststring..";

    // Write each character to the file descriptor using ft_putchar_fd
    ft_putendl_fd(str, fileDescriptor);

}

int main()
{
    test_ft_putendl_fd();

    return 0;
}*/
