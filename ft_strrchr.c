/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namoussa <namoussa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 18:16:04 by namoussa          #+#    #+#             */
/*   Updated: 2023/11/17 12:44:18 by namoussa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int		i;
	char	*ptr;
	char	c1;
	int		l;

	ptr = (char *)str;
	c1 = (char )c;
	l = ft_strlen(ptr);
	if (c1 == '\0')
		return (&ptr[l]);
	i = ft_strlen(ptr) - 1;
	while (i >= 0)
	{
		if (ptr[i] == c1)
			return (ptr + i);
		i--;
	}
	return (NULL);
}
