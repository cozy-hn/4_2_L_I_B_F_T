/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiko <jiko@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 22:36:40 by jiko              #+#    #+#             */
/*   Updated: 2023/03/16 23:03:48 by jiko             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	is_deli(char c, char c2)
{
	if (c == c2)
		return (1);
	return (0);
}

void	check_word_set_i(const char *str, char c, int *num_word, int i)
{
	*num_word = 0;
	*i = 0;
	while (*str)
	{
		while (is_deli(*str, c) && *str)
			str++;
		if (*str)
			(*num_word)++;
		while (*str)
		{
			if (is_deli(*str, c))
				break ;
			str++;
		}
	}
}

void	set_size_word(const char *str, char c, int *size_word)
{
	*size_word = 0;
	while (*str)
	{
		(*size_word)++;
		str++;
		if (is_deli(*str, c))
			break ;
	}
}

char	**ft_split(char const *str, char c)
{
	char	**be_return;
	int		num_word;
	int		size_word;
	int		i;

	check_word_set_i(str, c, &num_word, &i);
	be_return = ft_calloc(num_word + 1, sizeof(char *));
	if (!be_return)
		return (NULL);
	be_return[num_word] = NULL;
	while (*str)
	{
		if (!is_deli(*str, c))
		{
			set_size_word(str, c, &size_word);
			be_return[i] = ft_calloc(size_word + 1, 1);
			if (!be_return[i])
			{
				while (i != -1)
					free(be_return[i--]);
				free(be_return);
				return (NULL);
			}
			ft_strlcpy(be_return[i++], str, size_word + 1);
			str += size_word;
		}
		else
			str++;
	}
	return (be_return);
}
