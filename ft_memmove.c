/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiko <jiko@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 16:26:18 by jiko              #+#    #+#             */
/*   Updated: 2023/03/13 20:05:44 by jiko             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char		*tmp;
	const unsigned char	*tmp2;

	tmp = (unsigned char *)dst;
	tmp2 = (unsigned char *)src;
	if (dst <= src)
	{
		while (len--)
			*(tmp++) = *(tmp2++);
	}
	else
	{
		tmp += len;
		tmp2 += len;
		while (len--)
			*(--tmp) = *(--tmp2);
	}
	return (dst);
}
