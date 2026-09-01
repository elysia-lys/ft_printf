/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unsigned_base10.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeliew <yeliew@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/01 15:19:30 by yeliew            #+#    #+#             */
/*   Updated: 2026/09/01 15:35:43 by yeliew           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	count_digit(unsigned int n)
{
	int	count;

	count = 0;
	if (n == 0)
		return (1);
	while (n)
	{
		count++;
		n /= 10;
	}
	return (count);
}

static void	ft_putnbr_unsigned(unsigned int n)
{
	if (n >= 10)
		ft_putnbr_unsigned(n / 10);
	ft_putchar_fd((n % 10) + '0', 1);
}

int	ft_unsigned_decimal(unsigned int n)
{
	ft_putnbr_unsigned(n);
	return (count_digit(n));
}
