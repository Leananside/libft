/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tverschu <tverschu@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/09 23:16:35 by tverschu          #+#    #+#             */
/*   Updated: 2026/11/10 00:19:37 by tverschu         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	how_long_nb(int n)
{
	int	nb_of_char;

	nb_of_char = 0;
	while (n != 0)
	{
		n /= 10;
		nb_of_char++;
	}
	return (nb_of_char);
}

char	*ft_itoa(int n)
{
	char	*result;
	int		i;

	i = how_long_nb(n) + (n < 0);
	result = malloc(sizeof(char) * (i + 1));
	if (n < 0)
	{
		result[0] = '-';
		n *= -1;
	}
	result[i] = '\0';
	while (n != 0)
	{
		result[--i] = n % 10 + '0';
		n /= 10;
	}
	return (result);
}
