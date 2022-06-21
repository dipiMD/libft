/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drakan <drakan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 16:02:19 by drakan            #+#    #+#             */
/*   Updated: 2021/10/13 15:39:24 by drakan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	j;
	char	*arr;

	i = 0;
	j = 0;
	if (!s)
		return (NULL);
	arr = (char *)(malloc)(sizeof(*s) * (len + 1));
	if (!arr)
	{
		return (NULL);
	}
	while (s[i] != '\0')
	{
		if (i >= start && j < len)
		{
			arr[j] = s[i];
			j++;
		}
		i++;
	}
	arr[j] = 0;
	return (arr);
}
