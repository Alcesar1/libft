/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Alex GEOFFROY <ageoffro@student.42lausa    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 10:10:35 by Alex GEOFFR       #+#    #+#             */
/*   Updated: 2025/10/30 09:12:58 by Alex GEOFFR      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	slen;

	slen = ft_strlen(s);
	if (start >= slen)
	{
		str = ft_calloc(1, sizeof(char));
		if (!str)
			return (NULL);
		return (str);
	}
	if (len > (slen - start))
		len = (slen - start);
	str = ft_calloc(len +1, sizeof(char));
	if (!str)
		return (NULL);
	ft_strlcpy(str, s + start, len +1);
	return (str);
}
