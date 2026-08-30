/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeliew <yeliew@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/30 13:47:52 by yeliew            #+#    #+#             */
/*   Updated: 2026/07/30 14:36:55 by yeliew           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_words(char const *s, char c)
{
	int	count;
	int	in_word;

	count = 0;
	in_word = 0;
	while (*s)
	{
		if (*s != c && in_word == 0)
		{
			in_word = 1;
			count++;
		}
		else if (*s == c)
			in_word = 0;
		s++;
	}
	return (count);
}

static void	free_array(char **array, size_t index)
{
	while (index > 0)
	{
		free(array[--index]);
	}
}

static int	fill_array(char **array, char const *s, char c)
{
	size_t	i;
	size_t	start;
	size_t	index;

	i = 0;
	index = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		start = i;
		while (s[i] && s[i] != c)
			i++;
		if (i <= start)
			continue ;
		array[index] = ft_substr(s, start, i - start);
		if (!array[index])
		{
			free_array(array, index);
			return (0);
		}
		index++;
	}
	array[index] = 0;
	return (1);
}

char	**ft_split(char const *s, char c)
{
	char	**array;
	size_t	words;

	if (!s)
		return (0);
	words = count_words(s, c);
	array = malloc(sizeof(char *) * (words + 1));
	if (!array)
		return (0);
	if (!fill_array(array, s, c))
	{
		free(array);
		return (0);
	}
	return (array);
}
