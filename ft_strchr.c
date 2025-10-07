/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Alex GEOFFROY <ageoffro@student.42lausa    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/03 14:21:34 by Alex GEOFFR       #+#    #+#             */
/*   Updated: 2025/10/03 15:53:12 by Alex GEOFFR      ###   ########.fr       */
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