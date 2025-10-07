/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Alex GEOFFROY <ageoffro@student.42lausanne +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/06 12:04:38 by Alex GEOFFROY     #+#    #+#             */
/*   Updated: 2025/10/06 14:51:22 by Alex GEOFFROY    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t	i;
	unsigned char *ptr;
	
	ptr = (unsigned char*)s;
	i = 0;
	while(i < n)
	{
		*ptr = (unsigned char)c;
		i++;
		ptr++;
	}
	return(s);
}
/*
int	main()
{
	char s[] = "capibara";
	int c;
	size_t n = 9;

	c = '0';
	ft_memset(s, c, n);
	printf("%s", s);
	return (0);
}*/