/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexa_ptr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeliew <yeliew@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/01 15:43:38 by yeliew            #+#    #+#             */
/*   Updated: 2026/09/01 16:04:31 by yeliew           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_hex(unsigned int n, char convert)
{
	char	*base;
	int	count;

	count = 0;
	if (convert == 'x')
		base = "0123456789abcdef";
	else
		base = "0123456789ABCDEF";
	if (n >= 16)
	{
		count = ft_hex(n / 16, convert);
		if (count == -1)
			return (-1);
	}
	if (write(1, &base[n % 16], 1) == -1)
		return (-1);
	return (count + 1);
}

int	ft_ptr(void *ptr)
{
	unsigned long	n;

	if (!ptr)
		return (write(1, "(nil)", 5));
	n = (unsigned long)ptr;
	if (write (1, "0x", 2) == -1)
		return (-1);
	return (2 + ft_hex(n, 'x'));
}
