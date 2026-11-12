/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtok.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tverschu <tverschu@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/12 01:51:49 by tverschu          #+#    #+#             */
/*   Updated: 2026/11/12 02:24:57 by tverschu         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

int	is_in_delim(char c, char *delim)
{
	int	i;

	i = 0;
	while (delim[i])
	{
		if (delim[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtok(char *str, char *delim)
{
	static char	*next = NULL;
	size_t		i;

	if (str == NULL)
		str = next;
	if (str == NULL)
		return (NULL);
	while (is_in_delim(*str, delim))
		str++;
	if (*str == 0)
		return (NULL);
	i = 0;
	while (str[i] && !is_in_delim(str[i], delim))
		i++;
	if (str[i] != '\0')
		next = str + i + 1;
	else
		next = NULL;
	str[i] = '\0';
	return (str);
}
/*
int	main(void)
{
	char str[] = " Cucou Lol Kikoo    ";

	char *tok = ft_strtok(str, " ");
	while (tok)
	{
		printf("tok : %s\n", tok);
		tok = ft_strtok(NULL, " ,'");
	}
	return (0);
}*/
