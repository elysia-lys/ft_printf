/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeliew <yeliew@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/31 14:32:49 by yeliew            #+#    #+#             */
/*   Updated: 2026/07/31 15:31:56 by yeliew           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*array;
	size_t	i;

	if (!s || !f)
		return (0);
	array = malloc(ft_strlen(s) + 1);
	if (!array)
		return (0);
	i = 0;
	while (s[i])
	{
		array[i] = f(i, s[i]);
		i++;
	}
	array[i] = 0;
	return (array);
}
