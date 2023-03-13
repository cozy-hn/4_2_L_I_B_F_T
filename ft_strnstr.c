/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiko <jiko@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 21:18:17 by jiko              #+#    #+#             */
/*   Updated: 2023/03/13 21:25:54 by jiko             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*strnstr(const char *haystack, const char *needle, size_t len)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	if (!(*needle))
		return (haystack);
	while (*(haystack + i))
	{
		while (*(haystack + i + j) == *(needle + j))
		{
			j++;
			if (!(*(needle + j)))
				return (haystack + i);
		}
		j = 0;
		i++;
		if (i == len)
			break ;

	}
	return (NULL);
}
