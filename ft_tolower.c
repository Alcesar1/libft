/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alex <alex@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/03 13:39:16 by Alex GEOFFR       #+#    #+#             */
/*   Updated: 2025/10/08 15:40:35 by alex             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		c += 32;
		return (c);
	}
	return (c);
}
/*
int	main()
{
	int	c;

	c = 'A';
	c = ft_tolower(c);
	write(1, &c, 2);
	return (0);
}*/