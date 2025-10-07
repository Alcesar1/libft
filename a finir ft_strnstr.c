/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Alex GEOFFROY <ageoffro@student.42lausanne +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/06 11:05:34 by Alex GEOFFROY     #+#    #+#             */
/*   Updated: 2025/10/06 11:44:12 by Alex GEOFFROY    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *strnstr(const char *big, const char *little, size_t len)
{
	len = ft_strlen(big);
	size_t i;
	size_t j;
	
	i = 0;
	if (little == 0)
		return(big);
	while(big[i] != 0)
	{
		if((big[i]) = little[j])
		{
			while (big[i] = little[j] && j!=len)
			i++;
		}
	}
}