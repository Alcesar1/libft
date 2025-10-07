/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Alex GEOFFROY <ageoffro@student.42lausanne +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/06 15:17:20 by Alex GEOFFROY     #+#    #+#             */
/*   Updated: 2025/10/06 16:37:32 by Alex GEOFFROY    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char *ptr;
	unsigned char *ptr1;

	ptr1 = (unsigned char*)src;
	ptr = (unsigned char *)dest;
	while (n > 0)
	{
		*ptr = *ptr1;
		ptr++;
		ptr1++;
		n--;
	}
	return(dest);
}
/*
int	main()
{
	char	s1[] = "capi";
	char	s2[] = "bara";
	int	i = 4;

	ft_memcpy(s1, s2, i);
	printf("%s", s1);
	return (0);
	
}*/