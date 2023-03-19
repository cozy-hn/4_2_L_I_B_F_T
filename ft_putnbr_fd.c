/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiko <jiko@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 16:00:50 by jiko              #+#    #+#             */
/*   Updated: 2023/03/17 16:22:20 by jiko             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char		c;
	long long	tmp;

	tmp = (long long)n;
	if (tmp < 0)
	{
		ft_putchar_fd('-', fd);
		tmp *= -1;
	}
	if (tmp >= 10)
		ft_putnbr_fd(tmp / 10, fd);
	c = (tmp % 10) + '0';
	ft_putchar_fd(c, fd);
}
