/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Alex GEOFFROY <ageoffro@student.42lausa    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/06 11:05:34 by Alex GEOFFR       #+#    #+#             */
/*   Updated: 2025/10/10 16:00:29 by Alex GEOFFR      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	lenbig;
	size_t	j;

	lenbig = ft_strlen(big);
	i = 0;
	if (*little == '\0')
		return ((char *)big);
	while (big[i] != 0 && i < len)
	{
		j = 0;
		while (big[i + j] == little[j] && big[i + j] != '\0')
		{
			j++;
			if (little[j] == '\0')
				return ((char *)big + i);
		}
		i++;
	}
	return (0);
}
