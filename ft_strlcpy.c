/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ageoffro <ageoffro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/02 14:13:11 by ageoffro          #+#    #+#             */
/*   Updated: 2025/10/02 15:07:30 by ageoffro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_strlcpy(char *dest, const char *src, size_t size)
{
    int i;

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