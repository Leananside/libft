/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tverschu <tverschu@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/09 18:54:51 by tverschu          #+#    #+#             */
/*   Updated: 2026/11/10 03:01:30 by tverschu         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

int	count_words(char const *s, char c)
{
	int	i;
	int	word_count;

	i = 0;
	word_count = 0;
	while (s[i] == c)
		i++;
	while (s[i])
	{
		if (s[i] == c)
		{
			word_count++;
			while (s[i + 1] == c)
				i++;
		}
		i++;
	}
	if (s[i - 1] != c)
		word_count++;
	return (word_count);
}

int	word_length(char const *s, char c)
{
	int	len;

	len = 0;
	while (s[len] || s[len] != c)
		len++;
	return (len);
}

char	**ft_split(char const *s, char c)
{
	char	**words;
	int		i;
	int		j;
	int		word_len;
	int		number_of_words;

	i = 0;
	j = 0;
	number_of_words = count_words(s, c);
	words = malloc(sizeof(char *) * number_of_words);
	while (s[i])
	{
		if (s[i] != c)
		{
			word_len = word_length(s, c);
			words[j] = malloc(sizeof(char) * word_len + 1);
			ft_strlcpy(words[j], s + i, word_len + 1);
			j++;
			i += word_len;
		}
		while (s[i] == c)
			i++;
	}
	return (words);
}
