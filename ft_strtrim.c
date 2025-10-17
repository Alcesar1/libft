/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Alex GEOFFROY <ageoffro@student.42lausa    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 15:43:15 by Alex GEOFFR       #+#    #+#             */
/*   Updated: 2025/10/16 12:10:58 by Alex GEOFFR      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	ls1;
	size_t	start;
	size_t	end;
	const char	*str;
		
	ls1 = ft_strlen(s1);
	start = 0;
	end = ls1;
	if (s1 == 0 || set == 0)
		return (NULL);
	while (s1 = set)
		start++, s1++;
	while (s1 + ls1 = set)
		end--, s1--;
	str = ft_substr(s1, start, );
		return (str);
}
void	trim(char const *set, char c)
{
	int	i;

	i = 0;
	while (*set)
	{
		if (c == set)
		{
			return (1);
		}
		i++;
	}
	return (0);
}
