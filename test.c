/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiko <jiko@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 16:40:58 by jiko              #+#    #+#             */
/*   Updated: 2023/03/13 21:17:44 by jiko             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <memory.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
#include "libft.h"

size_t	ft_strlen(const char *s)
{
	int	n;

	n = 0;
	while (s[n])
		n++;
	return (n);
}

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

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*tmp;
	unsigned char	*tmp2;

	tmp = (unsigned char *)dst;
	tmp2 = (unsigned char *)src;
	while (n--)
		*(tmp++) = *(tmp2++);
	return (dst);
}

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*tmp;

	tmp = (unsigned char *)malloc(len);
	ft_memcpy(tmp, src, len);
	ft_memcpy(dst, tmp, len);
	return (dst);
}

char	*ft_strchr(const char *s, int c)
{
	char	*tmp;

	tmp = (char *)s;
	while (*tmp)
	{
		if (*tmp == c)
			return (tmp);
		tmp++;
	}
	return ((void *)0);
}

void	*ft_memchr(const void *s, int c, size_t n)
{
	char	*tmp;

	tmp = (char *)s;
	while (n--)
	{
		if (*tmp == c)
			return (tmp);
		tmp++;
	}
	return ((void *)0);
}

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*tmp;
	unsigned char	*tmp2;

	tmp = (unsigned char *)s1;
	tmp2 = (unsigned char *)s2;

	if (n == 0)
		return (0);
	while (*tmp == *tmp2 && --n)
	{
		tmp++;
		tmp2++;
	}
	return ((unsigned char)*tmp - (unsigned char)*tmp2);
}

int main()
{

	// int a[10]={1,2,3,4,55555,6,7,8,9,10};
	// int b[10]={0,};
	// ft_memmove(b,a,sizeof(int)*5);
	// printf("%d\n", b[0]);
	// printf("%d\n", b[1]);
	// printf("%d\n", b[2]);
	// printf("%d\n", b[3]);
	// printf("%d\n", b[4]);
	// printf("%d\n", b[5]);
	// printf("%d\n", b[6]);
	// printf("%d\n", b[7]);
	// printf("%d\n", b[8]);
	// printf("%d\n", b[9]);
	// printf("%s\n", (char*)ft_memchr("abc ade aee aff", 'e', ft_strlen("abc ade aee aff")));
	// printf("%s\n", (char*)memchr("abc ade aee aff", 'e',ft_strlen("abc ade aee aff")));
	printf("%d",ft_memcmp("123", "124", 3));
	return 0;
}
