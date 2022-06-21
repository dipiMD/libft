/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drakan <drakan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 15:18:22 by drakan            #+#    #+#             */
/*   Updated: 2021/10/15 18:00:18 by drakan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *destination, const void *source, size_t len)
{
	size_t					i;
	unsigned char			*udst;
	const unsigned char		*usrs;

	if (destination == 0 && source == 0)
		return (NULL);
	udst = (unsigned char *)destination;
	usrs = (unsigned char *)source;
	i = 0;
	if (udst > usrs)
	{
		while (++i <= len)
		{
			udst[len - i] = usrs[len - i];
		}
	}
	else
	{
		while (len > 0)
		{
			*(udst++) = *(usrs++);
			len--;
		}
	}
	return (destination);
}
