/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiko <jiko@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 19:13:48 by jiko              #+#    #+#             */
/*   Updated: 2023/03/15 21:46:28 by jiko             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*alloc_zero(void)
{
	char	*tmp;

	tmp = malloc(1);
	if (!tmp)
		return (NULL);
	*tmp = '\0';
	return (tmp);
}

char	*alloc(char const *s, unsigned int st, size_t len, unsigned int *strl)
{
	char	*tmp;
	int		idx;

	idx = 0;
	if (st >= *strl || !len)
		return (alloc_zero());
	else
	{
		if (*strl > st + len)
		{
			tmp = malloc(len + 1);
			if (!tmp)
				return (NULL);
			while (len--)
				tmp[idx++] = s[st++];
			tmp[idx] = '\0';
		}
		else
			tmp = (char *)ft_strdup(((char *)s + st));
	}
	return ((char *)tmp);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*tmp;
	unsigned int	strl;

	strl = (unsigned int)ft_strlen(s);
	tmp = alloc(s, start, len, &strl);
	return ((char *)tmp);
}
