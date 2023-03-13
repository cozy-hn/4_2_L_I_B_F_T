/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiko <jiko@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 14:00:38 by jiko              #+#    #+#             */
/*   Updated: 2023/03/13 19:46:49 by jiko             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	unsigned int	i;

	i = 0;
	if (size == 0)
		return (ft_strlen(src));
	if (*src == '\0')
	{
		*dest = '\0';
		return (0);
	}
	while (++i <= dstsize - 1)
		*(dst + i - 1) = *(src + i - 1);
	*(dst + dstsize -1) = '\0';
	return (ft_strlen(src));
}
