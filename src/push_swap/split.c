/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   split.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aatan <aatan@student.42berlin.de>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 16:53:31 by aatan             #+#    #+#             */
/*   Updated: 2024/02/27 16:00:04 by aatan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

static int	count_words(char *str, char c)
{
	int		count;
	int		inside_word;

	count = 0;
	while (*str)
	{
		inside_word = 0;
		while (*str == c && *str)
			++str;
		while (*str != c && *str)
		{
			if (!inside_word)
			{
				++count;
				inside_word = 1;
			}
			++str;
		}
	}
	return (count);
}

static char	*get_next_word(char *str, char d)
{
	static int	cursor = 0;
	char		*next_word;
	size_t		len;
	int			i;

	len = 0;
	i = 0;
	while (str[cursor] == d)
		++cursor;
	while ((str[cursor + len] != d) && str[cursor + len])
		++len;
	next_word = malloc(len * sizeof(char) + 1);
	if (NULL == next_word)
	{
		free(next_word);
		return (NULL);
	}
	while ((str[cursor] != d) && str[cursor])
		next_word[i++] = str[cursor++];
	next_word[i] = '\0';
	return (next_word);
}

void	*initname(char **result)
{
	result[0] = malloc(sizeof(char));
	if (NULL == result[0])
	{
		free(result);
		return (NULL);
	}
	result[0][0] = '\0';
	return (result[0]);
}

char	**split(char *str, char d)
{
	size_t	words_count;
	char	**result;
	size_t	i;

	i = 0;
	words_count = count_words(str, d);
	if (!words_count)
		exit(1);
	result = malloc(sizeof(char *) * (words_count + 2));
	if (NULL == result)
		return (NULL);
	// if (i == 0)
	// {
	// 	initname(result);
	// 	i++;
	// }
	while (words_count > i)
	{
		result[i] = get_next_word(str, d);
		++i;
	}
	result[i] = NULL;
	return (result);
}
