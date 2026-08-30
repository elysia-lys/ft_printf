/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeliew <yeliew@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/29 17:32:31 by yeliew            #+#    #+#             */
/*   Updated: 2026/07/29 20:15:26 by yeliew           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	len1;
	size_t	len2;
	char	*array;

	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	array = malloc((len1 + len2) + 1);
	if (!array)
		return (0);
	ft_memcpy(array, s1, len1);
	ft_memcpy(array + len1, s2, len2);
	array[len1 + len2] = 0;
	return (array);
}
