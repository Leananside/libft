/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tverschu <tverschu@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/05 07:06:17 by tverschu          #+#    #+#             */
/*   Updated: 2026/11/10 02:44:24 by tverschu         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdint.h>

void	*ft_memset(void *s, int c, size_t n)
{
	size_t	i;
	uint8_t	*mem;

	mem = s;
	i = 0;
	while (i < n)
	{
		mem[i] = c;
		i++;
	}
	return (s);
}
