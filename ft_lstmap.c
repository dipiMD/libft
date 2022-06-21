/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drakan <drakan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 20:54:37 by drakan            #+#    #+#             */
/*   Updated: 2021/10/13 20:27:27 by drakan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*src;
	t_list	*arr;

	if (!f || !lst)
		return (NULL);
	arr = ft_lstnew(f(lst->content));
	if (!arr)
		ft_lstclear(&lst, del);
	src = arr;
	lst = lst->next;
	while (lst)
	{
		arr = ft_lstnew(f(lst->content));
		if (!arr)
		{
			ft_lstclear(&lst, del);
			ft_lstclear(&src, del);
			break ;
		}
		lst = lst->next;
		ft_lstadd_back(&src, arr);
	}
	return (src);
}
