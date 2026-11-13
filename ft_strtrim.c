/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */

/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/09 18:18:46 by tverschu          #+#    #+#             */
/*   Updated: 2026/11/10 04:24:29 by tverschu         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <stdio.h>

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*trimmed_str;
	int		start;
	int		end;

	start = 0;
	end = ft_strlen(s1);
	while (ft_strchr(set, s1[start]) && start < end)
		start++;
	while (ft_strchr(set, s1[end]) && end > start)
		end--;
	trimmed_str = malloc(sizeof(char) * (end - start) + 1);
	if (trimmed_str == NULL)
		return (NULL);
	ft_strlcpy(trimmed_str, s1 + start, (end - start + 2));
	return (trimmed_str);
}
/*
int	main(void)
{
	char	str[] = "  Hello World  ";
	printf("%s", ft_strtrim(str, " "));
}*/
