/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aatan <aatan@student.42berlin.de>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 12:44:54 by aatan             #+#    #+#             */
/*   Updated: 2024/02/12 14:44:15 by aatan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*temp;
	t_list	*current;

	if (lst == NULL || *lst == NULL || del == NULL)
		return ;
	current = *lst;
	while (current)
	{
		temp = (current)->next;
		ft_lstdelone(current, del);
		current = temp;
	}
	*lst = NULL;
}
