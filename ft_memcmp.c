/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drakan <drakan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 16:30:53 by drakan            #+#    #+#             */
/*   Updated: 2021/10/13 15:46:32 by drakan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *destination, const void *source, size_t count)
{
	const unsigned char	*udst;
	const unsigned char	*usrs;
	size_t				i;

	i = 0;
	if (count == 0 || destination == source)
		return (0);
	udst = (const unsigned char *)destination;
	usrs = (const unsigned char *)source;
	while (i < count)
	{
		if (udst[i] != usrs[i])
			return (udst[i] - usrs[i]);
		i++;
	}
	return (0);
}
