/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Alex GEOFFROY <ageoffro@student.42lausa    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/02 15:31:34 by Alex GEOFFR       #+#    #+#             */
/*   Updated: 2025/10/03 12:05:52 by Alex GEOFFR      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	int	i;
	int	j;
	int	f;

	f = 0;
	j = size - ft_strlen(dst) - 1;
	i = ft_strlen(dst);
	while (i != j)
	{
		dst[i] = src[f];
		i++;
		f++;
	}
	dst[i] = '\0';
	return(*dst);
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