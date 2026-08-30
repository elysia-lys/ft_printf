/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeliew <yeliew@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/30 14:38:50 by yeliew            #+#    #+#             */
/*   Updated: 2026/07/30 15:37:04 by yeliew           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_digits(int n)
{
	int	count;

	count = 0;
	if (n <= 0)
		count++;
	while (n)
	{
		count++;
		n /= 10;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	char	*array;
	int		len;
	long	num;

	num = n;
	len = count_digits(n);
	array = malloc(len + 1);
	if (!array)
		return (0);
	array[len] = 0;
	if (num < 0)
	{
		array[0] = '-';
		num = -num;
	}
	while (len > 0)
	{
		len--;
		if (len == 0 && n < 0)
			break ;
		array[len] = (num % 10) + '0';
		num /= 10;
	}
	return (array);
}
