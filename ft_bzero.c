/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Alex GEOFFROY <ageoffro@student.42lausanne +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/06 14:52:06 by Alex GEOFFROY     #+#    #+#             */
/*   Updated: 2025/10/06 15:16:21 by Alex GEOFFROY    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, '0', n);
}
/*
int	main()
{
	char s[] = "capibara";
	size_t n = 9;
	
	ft_bzero(s, n);
	printf("%s", s);
	return (0);
}*/