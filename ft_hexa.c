/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeliew <yeliew@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/01 15:43:38 by yeliew            #+#    #+#             */
/*   Updated: 2026/09/01 16:04:31 by yeliew           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	count_hex(unsigned int n)
{
	int	count;

	count = 0;
	if (n == 0)
		return (1);
	while (n)
	{
		count++;
		n /= 16;
	}
	return (count);
}

static void	ft_puthex(unsigned int n, char convert)
{
	char	*base;

	if (convert == 'x')
		base = "0123456789abcdef";
	else
		base = "0123456789ABCDEF";
	if (n >= 16)
		ft_puthex(n / 16, convert);
	ft_putchar_fd(base[n % 16], 1);
}

int	ft_hex(unsigned int n, char convert)
{
	ft_puthex(n, convert);
	return (count_hex(n));
}
