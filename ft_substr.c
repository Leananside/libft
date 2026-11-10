/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tverschu <tverschu@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/09 17:40:36 by tverschu          #+#    #+#             */
/*   Updated: 2026/11/10 14:59:45 by tverschu         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned long	s_len;
	char			*newstr;

	s_len = ft_strlen(s);
	if (start + len > s_len)
		len = s_len - start;
	newstr = malloc(sizeof(char) * (len + 1));
	if (newstr == NULL)
		return (NULL);
	ft_memcpy(newstr, s + start, len);
	return (newstr);
}
