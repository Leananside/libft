/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tverschu <tverschu@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/09 18:18:46 by tverschu          #+#    #+#             */
/*   Updated: 2026/11/18 22:02:14 by tverschu         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strtrim(char const *s1, char const *set)
{
	char		*trimmed_str;
	size_t		start;
	size_t		end;

	start = 0;
	end = ft_strlen(s1);
	while (start < end && ft_strchr(set, s1[start]))
		start++;
	while (end > start && ft_strchr(set, s1[end - 1]))
		end--;
	trimmed_str = malloc(sizeof(char) * (end - start) + 1);
	if (trimmed_str == NULL)
		return (NULL);
	ft_strlcpy(trimmed_str, s1 + start, (end - start + 1));
	return (trimmed_str);
}
