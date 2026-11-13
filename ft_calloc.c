/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tverschu <tverschu@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/09 16:26:37 by tverschu          #+#    #+#             */
/*   Updated: 2026/11/12 15:02:24 by tverschu         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <stdint.h>

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*mem;
	size_t	total;

	mem = 0;
	if (size == 0)
	{
		mem = malloc(1);
		return (mem);
	}
	if (nmemb > SIZE_MAX / size)
		return (NULL);
	total = size * nmemb;
	mem = malloc(total);
	if (mem == NULL)
		return (NULL);
	ft_bzero(mem, total);
	return (mem);
}
