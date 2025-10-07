/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Alex GEOFFROY <ageoffro@student.42lausanne +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/06 09:00:02 by Alex GEOFFROY     #+#    #+#             */
/*   Updated: 2025/10/06 11:05:00 by Alex GEOFFROY    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (s1[i] != 0 && i != n)
	{
		if (s1[i] != s2[i])
			return (s1[i]-s2[i]);
	i++;
	}
	return (0);
}
/*
int	main()
{
	const char s1[] = "capAbara";
	const char s2[] = "capa";
	size_t n = 4;
	int	result;
	
	result = ft_strncmp(s1, s2, n);
	printf("%d", result);
	return (0);
}*/