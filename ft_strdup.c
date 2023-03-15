/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiko <jiko@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 17:42:13 by jiko              #+#    #+#             */
/*   Updated: 2023/03/15 17:52:30 by jiko             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*cp;
	char	*tmp;

	cp = malloc(ft_strlen(src) + 1);
	tmp = cp;
	if (tmp != NULL)
	{
		while (*src)
			*tmp++ = *src++;
		*tmp = '\0';
		return (cp);
	}
	return (0);
}
