/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbalasho <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 13:40:45 by sbalasho          #+#    #+#             */
/*   Updated: 2023/02/02 13:40:51 by sbalasho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

void	ft_putnbr_(int n)
{
	if (n == -2147483648)
		write(1, "-2147483648", 11);
	if (n < 0 && n > -2147483648)
	{
		write(1, "-", 1);
		n = n * (-1);
	}
	if (n >= 10)
		ft_putnbr_(n / 10);
	if (n != -2147483648)
		ft_putchar_(n % 10 + 48);
	return ;
}
