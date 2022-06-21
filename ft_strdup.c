/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drakan <drakan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 14:59:29 by drakan            #+#    #+#             */
/*   Updated: 2021/10/13 15:54:00 by drakan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *str1)
{
	int		i;
	char	*arr;

	i = 0;
	while (str1[i] != '\0')
		i++;
	arr = (char *)malloc((sizeof (*str1) * i + 1));
	if (!arr)
		return (NULL);
	i = 0;
	while (str1[i] != '\0')
	{
		arr[i] = str1[i];
		i++;
	}
	arr[i] = '\0';
	return (arr);
}
