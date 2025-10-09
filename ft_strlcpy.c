/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alex <alex@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/02 14:13:11 by ageoffro          #+#    #+#             */
/*   Updated: 2025/10/09 10:52:13 by alex             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	lensrc;

	lensrc = ft_strlen(src);
	i = 0;
	if (size == 0)
		return (lensrc);
	while (i < size -1 && src[i] != 0)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (lensrc);
}
/*
int main(void)
{
    char    dest[] = "Capibara";
    const char  src[] = "bara";
    size_t  size = 8;

    ft_strlcpy(dest, src, size);
    printf("%s", dest);
    return (0);
}*/