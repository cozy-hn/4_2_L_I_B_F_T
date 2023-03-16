/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiko <jiko@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 21:54:32 by jiko              #+#    #+#             */
/*   Updated: 2023/03/16 19:40:34 by jiko             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *dest, char *src)
{
	int	i;

	i = 0;
	while (*(dest + i))
		i++;
	while (*src)
	{
		*(dest + i) = *(src++);
		i++;
	}
	*(dest + i) = '\0';
	return (dest);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*tmp;

	tmp = ft_calloc(ft_strlen(s1) + ft_strlen(s2) + 1, 1);
	if (!tmp)
		return (tmp);
	tmp = ft_strcat(tmp, (char *)s1);
	tmp = ft_strcat(tmp, (char *)s2);
	return (tmp);
}
