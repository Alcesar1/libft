/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Alex GEOFFROY <ageoffro@student.42lausanne +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/02 14:13:11 by ageoffro          #+#    #+#             */
/*   Updated: 2025/10/07 16:42:25 by Alex GEOFFROY    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_strlcpy(char *dest, const char *src, size_t size)
{
    size_t i;

	i = 0;
    while (i <= size-1)
    {
        dest[i] = src[i];
        i++;
    }
    return (*dest);
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