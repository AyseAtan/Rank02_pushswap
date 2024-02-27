/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aatan <aatan@student.42berlin.de>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 12:42:39 by aatan             #+#    #+#             */
/*   Updated: 2024/02/12 14:47:29 by aatan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

static int	count_words(const char *s, char c)
{
	int	count;
	int	in_word;

	count = 0;
	in_word = 0;
	while (*s)
	{
		if (*s != c && !in_word)
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

static int	word_length(const char *s, char c)
{
	int	length;

	length = 0;
	while (*s && *s != c)
	{
		length++;
		s++;
	}
	return (length);
}

static void	fill_result(char **result, size_t word_count, const char *s, char c)
{
	size_t	i;
	size_t	word_len;

	i = 0;
	while (i < word_count)
	{
		while (*s != 0 && *s == c)
			s++;
		word_len = word_length(s, c);
		result[i] = ft_substr(s, 0, word_len);
		s += word_len;
		i++;
	}
	result[i] = 0;
}

char	**ft_split(char const *s, char c)
{
	size_t	word_count;
	char	**result;

	word_count = count_words(s, c);
	if (!s)
		return (NULL);
	result = malloc(sizeof(char *) * (word_count + 1));
	if (!result)
		return (NULL);
	fill_result(result, word_count, s, c);
	return (result);
}
