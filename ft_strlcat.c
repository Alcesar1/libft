/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alex <alex@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/02 15:31:34 by Alex GEOFFR       #+#    #+#             */
/*   Updated: 2025/10/09 10:28:28 by alex             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	lendst;
	size_t	lensrc;

	lendst = ft_strlen(dst);
	lensrc = ft_strlen(src);
	if (size <= lendst)
		return (size + lensrc);
	if (lensrc < size - lendst)
		ft_memcpy(dst + lendst, src, lensrc + 1);
	else
	{
		ft_memcpy(dst + lendst, src, size - lendst - 1);
		dst[size - 1] = '\0';
	}
	return (lensrc + lendst);
}
/*
int main(void)
{
    char    dest[] = "Capibara";
    const char  src[] = " numero uno";

    size_t  size = 30;
    ft_strlcat(dest, src, size);
    printf("%s", dest);
    return (0);
}*/