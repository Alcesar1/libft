/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alex <alex@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/06 16:39:07 by Alex GEOFFR       #+#    #+#             */
/*   Updated: 2025/10/09 17:09:57 by alex             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t = lendest;
	size_t = lensrc;

	lendest = ft_strlen(dest);
	lensrc = ft_strlen(src);
	
	if (lendest < lensrc)
	{
		ft_memcpy(ptrd, ptrs, n);
		return(dest);
	}
	else (lendest > lensrc)
	{
		while (dest + lendest > 0)
		{
			*dest = *src;
			lendest--;
			lensc--;
		}
		return(dest);
	}
}
/*
int	main()
{
	char src[] = "capi";
	char dst[] = "baralavida"
	size_t n = 9;

	ft_memmove(dst, src, n);
	printf("%s", dst);
	return (0);
}*/