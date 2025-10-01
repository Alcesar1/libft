/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isacii.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ageoffro <ageoffro@42lausanne.ch>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/30 13:28:18 by ageoffro          #+#    #+#             */
/*   Updated: 2025/09/30 14:10:29 by ageoffro         ###   ####lausanne.ch   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 177)
		return (1);
	else
		return (0);
}
/*
int	main(int c)
{
	int	result;
	c = '~';
	result = ft_isascii(c);
	printf("%d", result);
	return (0);
}*/
