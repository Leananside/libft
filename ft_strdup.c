/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tverschu <tverschu@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/09 16:48:22 by tverschu          #+#    #+#             */
/*   Updated: 2026/11/10 03:06:20 by tverschu         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*newstr;
	int		s_len;

	s_len = ft_strlen(s);
	newstr = malloc(sizeof(char) * s_len + 1);
	if (newstr == NULL)
		return (NULL);
	ft_strlcpy(newstr, s, s_len);
	return (newstr);
}
