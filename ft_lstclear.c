/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drakan <drakan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 20:49:35 by drakan            #+#    #+#             */
/*   Updated: 2021/10/13 15:49:09 by drakan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*str;
	t_list	*arr;

	arr = *lst;
	while (arr)
	{
		str = arr->next;
		if (del)
			del(arr->content);
		free (arr);
		arr = str;
	}
	*lst = NULL;
}
