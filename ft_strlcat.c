/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tverschu <tverschu@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/05 18:35:07 by tverschu          #+#    #+#             */
/*   Updated: 2026/11/10 16:14:21 by tverschu         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <aio.h>
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	src_len;
	size_t	dst_len;

	i = 0;
	src_len = ft_strlen(src);
	dst_len = ft_strlen(dst);
	if (size <= 0)
		return (src_len);
	if (size < dst_len)
		return (size + src_len);
	while (src[i] && (dst_len + i) < size - 1)
	{
		((unsigned char *)dst)[dst_len + i] = ((unsigned char *)src)[i];
		i++;
	}
	dst[dst_len + i] = '\0';
	return (src_len + dst_len);
}
