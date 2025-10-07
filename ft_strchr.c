/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alex <alex@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/03 14:21:34 by Alex GEOFFR       #+#    #+#             */
/*   Updated: 2025/10/07 14:04:04 by alex             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strchr(const char *s, int c)
{
	while (*s != 0)
	{
		if (*s == (char)c)
			return (char*)s;
		s++;
	}
	return(0);
}
/*
int	main()
{
	const char	*s = "Capibaralaresta";
	int	c;

	c = 's';
	printf("%s", ft_strchr(s, c));
	return(0);
}*/

/*comment*/