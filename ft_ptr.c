/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ptr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeliew <yeliew@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/01 16:04:44 by yeliew            #+#    #+#             */
/*   Updated: 2026/09/01 16:16:39 by yeliew           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	countptr(unsigned long n)
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

static void	ft_putptr(unsigned long n)
{
	char	*base;

	base = "0123456789abcdef";
	if (n >= 16)
		ft_putptr(n / 16);
	ft_putchar_fd(base[n % 16], 1);
}

int	ft_ptr(void *ptr)
{
	unsigned long	n;

	if (!ptr)
		return (write(1, "(nil)", 5));
	n = (unsigned long)ptr;
	write (1, "0x", 2);
	ft_putptr(n);
	return (2 + countptr(n));
}
