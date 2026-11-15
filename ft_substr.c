/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tverschu <tverschu@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/09 17:40:36 by tverschu          #+#    #+#             */
/*   Updated: 2026/11/11 21:57:16 by tverschu         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	s_len;
	char	*newstr;

	s_len = ft_strlen(s);
	if (start > s_len)
	{
		newstr = malloc(1);
		if (!newstr)
			return (NULL);
		newstr[0] = '\0';
		return (newstr);
	}
	if (len > s_len - start)
		len = s_len - start;
	newstr = malloc(sizeof(char) * (len + 1));
	if (!newstr)
		return (NULL);
	ft_memcpy(newstr, (char *)(s + start), len);
	newstr[len] = '\0';
	return (newstr);
}
