/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeliew <yeliew@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/01 01:01:19 by yeliew            #+#    #+#             */
/*   Updated: 2026/07/01 01:57:03 by yeliew           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *a)
{
	int	i;
	int	sign;
	int	result;

	i = 0;
	while (a[i] == ' ' || (a[i] >= 9 && a[i] <= 13))
		i++;
	sign = 1;
	if (a[i] == '-' || a[i] == '+')
	{
		if (a[i] == '-')
			sign = -1;
		i++;
	}
	result = 0;
	while (a[i] >= '0' && a[i] <= '9')
	{
		result = result * 10 + (a[i] - '0');
		i++;
	}
	return (result * sign);
}
