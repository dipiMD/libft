/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drakan <drakan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 15:21:57 by drakan            #+#    #+#             */
/*   Updated: 2021/10/13 15:25:59 by drakan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *destination, const void *source, size_t n)
{
	int		i;
	int		j;
	char	*udst;
	char	*usrs;

	j = 0;
	i = 0;
	udst = (char *)destination;
	usrs = (char *)source;
	while (n > 0 && (udst || usrs))
	{
		udst[i] = usrs[j];
		i++;
		j++;
		n--;
	}
	return (destination);
}
