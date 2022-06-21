/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drakan <drakan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 15:14:04 by drakan            #+#    #+#             */
/*   Updated: 2021/10/13 15:26:07 by drakan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_memset(void *b, int c, size_t len)
{
	size_t			i;
	unsigned char	*ub;

	ub = (unsigned char *) b;
	i = 0;
	while (i < len)
	{
		ub[i] = (unsigned char)c;
		i++;
	}
	return (b);
}
