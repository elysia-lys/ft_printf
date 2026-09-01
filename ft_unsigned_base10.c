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

int	ft_unsigned_decimal(unsigned int n)
{
	char	c;
	int		count;

	count = 0;
	if (n >= 10)
		count = ft_unsigned_decimal(n / 10);
	if (count == -1)
		return (-1);
	c = (n % 10) + '0';
	if (write(1, &c, 1) == -1)
		return (-1);
	return (count + 1);
}
