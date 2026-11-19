/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tverschu <tverschu@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/09 18:07:35 by tverschu          #+#    #+#             */
/*   Updated: 2026/11/18 22:01:40 by tverschu         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	char		*newstr;
	size_t		s1_len;
	size_t		s2_len;

	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	newstr = malloc(sizeof(char) * (s1_len + s2_len + 1));
	if (newstr == NULL)
		return (NULL);
	ft_strlcpy(newstr, s1, (s1_len + 1));
	ft_strlcat(newstr, s2, (s1_len + s2_len + 1));
	return (newstr);
}
