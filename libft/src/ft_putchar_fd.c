/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aatan <aatan@student.42berlin.de>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 12:38:52 by aatan             #+#    #+#             */
/*   Updated: 2024/02/12 14:45:06 by aatan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
/*

static void test_ft_putchar_fd()
{
    // Open a file or use another valid file descriptor
    int fileDescriptor = 1; // 1 represents standard output (stdout)

    // Characters to write
    char characters[] = {'H', 'e', 'l', 'l', 'o', '\n'};
    int size = sizeof(characters);
    // Write each character to the file descriptor using ft_putchar_fd
    for (int i = 0; i < size; i++)
    {
        ft_putchar_fd(characters[i], fileDescriptor);
    }
}

int main()
{

    test_ft_putchar_fd();

    return 0;
}*/
