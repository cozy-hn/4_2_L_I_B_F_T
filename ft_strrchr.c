/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiko <jiko@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 20:01:32 by jiko              #+#    #+#             */
/*   Updated: 2023/03/13 20:31:21 by jiko             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*tmp;
	int		slen;

	tmp = (char *)s;
	slen = ft_strlen(s);
	if (slen == 0)
		return ((void *)0);
	while (slen)
	{
		if (tmp[slen] == c)
			return ((tmp + slen));
		slen--;
	}
	return ((void *)0);
}
