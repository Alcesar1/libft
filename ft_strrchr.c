/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Alex GEOFFROY <ageoffro@student.42lausa    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/03 16:09:42 by Alex GEOFFR       #+#    #+#             */
/*   Updated: 2025/10/03 16:23:56 by Alex GEOFFR      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = ft_strlen(s);
	while (s[i] > 0)
	{
		if (s[i] == (char)c)
			return (char*)s;
		i--;
	}
	return (0);
}

int	main()
{
	const char *s = "Capislesresta";
	int	c;

	c = 's';
	printf("%s", ft_strrchr(s, c));
	return (0);
}