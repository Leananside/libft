/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tverschu <tverschu@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/09 23:16:35 by tverschu          #+#    #+#             */
/*   Updated: 2026/11/12 01:47:27 by tverschu         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"
#include <stdio.h>

int	how_long_nb(int n)
{
	int	nb_of_char;

	if (n == 0)
		return (1);
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
	if (result == 0)
		return (NULL);
	result[i] = '\0';
	if (n == -2147483648)
	{
		ft_memcpy(result, "-2147483648", 11);
		return (result);
	}
	*result = '0';
	if (n < 0)
	{
		result[0] = '-';
		n *= -1;
	}
	while (n != 0)
	{
		result[--i] = n % 10 + '0';
		n /= 10;
	}
	return (result);
}
/*
int	main(void)
{
	#include <stdio.h>
	printf("%s", ft_itoa(-2147483648));
}*/
