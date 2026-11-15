/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tverschu <tverschu@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/11 22:25:25 by tverschu          #+#    #+#             */
/*   Updated: 2026/11/12 13:16:18 by tverschu         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	count_words(char const *s, char c);
static int		split_while(char **words, const char *s, char c, size_t *pos);
static void		free_words(char **words, size_t pos);

char	**ft_split(char const *s, char c)
{
	char	**words;
	size_t	pos;
	size_t	number_of_words;

	if (!s)
		return (NULL);
	pos = 0;
	number_of_words = count_words(s, c);
	words = malloc(sizeof(char *) * (number_of_words + 1));
	if (!words)
		return (NULL);
	if (!split_while(words, s, c, &pos))
	{
		free_words(words, pos);
		free(words);
		return (NULL);
	}
	words[pos] = NULL;
	return (words);
}

static size_t	count_words(char const *s, char c)
{
	size_t	i;
	size_t	number_of_words;

	i = 0;
	number_of_words = 0;
	while (s[i] == c && s[i])
		i++;
	while (s[i])
	{
		while (s[i] != c && s[i])
			i++;
		while (s[i] == c && s[i])
			i++;
		number_of_words++;
	}
	return (number_of_words);
}

static int	split_while(char **words, const char *s, char c, size_t *pos)
{
	size_t	length;
	size_t	i;

	i = 0;
	while (s[i] == c && s[i])
		i++;
	while (s[i])
	{
		length = 0;
		while (s[i + length] != c && s[i + length])
			length++;
		words[*pos] = malloc(sizeof(char) * (length + 1));
		if (!words[*pos])
			return (0);
		ft_strlcpy(words[*pos], s + i, length + 1);
		(*pos)++;
		i += length;
		while (s[i] == c && s[i])
			i++;
	}
	return (1);
}

static void	free_words(char **words, size_t pos)
{
	size_t	i;

	i = 0;
	while (i < pos)
	{
		free(words[i]);
		i++;
	}
}
