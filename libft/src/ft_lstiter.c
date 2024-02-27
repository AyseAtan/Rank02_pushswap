/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aatan <aatan@student.42berlin.de>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 12:45:10 by aatan             #+#    #+#             */
/*   Updated: 2024/02/12 14:44:24 by aatan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!(lst || f))
		return ;
	while (lst != NULL)
	{
		f(lst->content);
		lst = lst->next;
	}
}
