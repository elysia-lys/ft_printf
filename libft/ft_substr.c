/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeliew <yeliew@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/29 14:00:51 by yeliew            #+#    #+#             */
/*   Updated: 2026/07/29 17:32:15 by yeliew           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	slen;
	size_t	i;
	char	*array;

	slen = ft_strlen(s);
	if (start >= slen)
		len = 0;
	else if (len > (slen - start))
		len = slen - start;
	array = malloc(len + 1);
	if (!array)
		return (0);
	i = 0;
	while (i < len)
	{
		array[i] = s[start + i];
		i++;
	}
	array[i] = 0;
	return (array);
}
