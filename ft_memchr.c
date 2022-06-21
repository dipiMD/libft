/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drakan <drakan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 15:30:32 by drakan            #+#    #+#             */
/*   Updated: 2021/10/13 15:46:46 by drakan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *arr, int c, size_t len)
{
	size_t			i;
	unsigned char	*ub;

	ub = (unsigned char *) arr;
	i = 0;
	while (i < len)
	{
		if (ub[i] == (unsigned char)c)
		{
			return ((void *)(arr + i));
		}
		i++;
	}
	return (NULL);
}
