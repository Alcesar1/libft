/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Alex GEOFFROY <ageoffro@student.42lausanne +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/06 16:39:07 by Alex GEOFFROY     #+#    #+#             */
/*   Updated: 2025/10/06 17:25:42 by Alex GEOFFROY    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char *ptrd;
	unsigned char *ptrs;
	size_t = lendest;
	size_t = lensrc;
	
	ptrd = (unsigned char *)dest;
	ptrs = (unsigned char *)src;
	lendest = ft_strlen(dest);
	lensrc = ft_strlen(src);
	
	if (lendest < lensrc)
	{
		ft_memcpy(ptrd, ptrs, n);
		return(dest);
	}
	else if (lendest > lensrc)
	{
		while (ptrd[lendest] > 0)
		{
			ptrd[lendest] = ptrs[lensrc];
			lendest--;
			lensc--;
		}
		return(dest);
	}
}

int	main()
{
	char src[] = "capi";
	char dst[] = "baralavida"
	size_t n = 9;

	ft_memmove(dst, src, n);
	printf("%s", dst);
	return (0);
}