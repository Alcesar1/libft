/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Alex GEOFFROY <ageoffro@student.42lausa    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/03 12:07:40 by Alex GEOFFR       #+#    #+#             */
/*   Updated: 2025/10/03 13:38:06 by Alex GEOFFR      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if ( c >= 'a' && c <= 'z')
	{	
		c -= 32;
		return(c);
	}
	else
		return(0);
}
/*
int	main()
{
	int	c;

	c = 'z';
	c = ft_toupper(c);
	write(1, &c, 1);
	return (0);
}*/