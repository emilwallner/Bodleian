/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewallner <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/05 16:16:42 by ewallner          #+#    #+#             */
/*   Updated: 2016/11/15 14:41:06 by ewallner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	ft_putnbr_fd(int n, int fd)
{
	unsigned int b;

	if(n < 0)
	{
		ft_putchar_fd('-', fd);
		b = -n;
	}
	else
		b = n;
	if (b < 10)
		ft_putchar_fd((b + '0'), fd);
	else 
	{
		ft_putnbr_fd(b / 10, fd);
		ft_putchar_fd(b % 10 + '0', fd);
	}
}
/*
int		main(void)
{
	ft_putnbr_fd(200, 1);
	ft_putnbr_fd(2147483647, 1);
	ft_putnbr_fd(-2147483648, 1);
	ft_putnbr_fd(0, 1);
	ft_putnbr_fd(1, 1);
	return 0;
}*/
