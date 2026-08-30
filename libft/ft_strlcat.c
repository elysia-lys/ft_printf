/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeliew <yeliew@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/21 01:58:41 by yeliew            #+#    #+#             */
/*   Updated: 2026/07/21 02:06:48 by yeliew           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t destsize)
{
	size_t	dest_len;
	size_t	src_len;
	size_t	i;
	size_t	j;

	dest_len = 0;
	while (dest[dest_len] && dest_len < destsize)
		dest_len++;
	src_len = 0;
	while (src[src_len])
		src_len++;
	if (destsize == dest_len)
		return (destsize + src_len);
	i = dest_len;
	j = 0;
	while ((i < destsize - 1) && src[j])
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = 0;
	return (dest_len + src_len);
}
