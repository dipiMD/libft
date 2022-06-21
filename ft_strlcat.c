/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drakan <drakan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 14:38:53 by drakan            #+#    #+#             */
/*   Updated: 2021/10/13 15:37:14 by drakan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t destsize)
{
	size_t		i;
	size_t		size_src;

	i = 0;
	size_src = 0;
	while (dst[i])
	{
		i++;
	}
	if (destsize < i)
	{
		while (src[size_src])
		{
			size_src++;
		}
		return (destsize + size_src);
	}
	while (destsize > 0 && i < destsize - 1 && src[size_src])
	{
		dst[i++] = src[size_src++];
	}
	dst[i] = '\0';
	while (src[size_src++])
		i++;
	return (i);
}
