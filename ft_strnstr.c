/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namoussa <namoussa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 12:02:37 by namoussa          #+#    #+#             */
/*   Updated: 2023/11/17 15:23:33 by namoussa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t len)
{
	char	*c1;
	char	*to_find;
	size_t	i;
	size_t	j;

	c1 = (char *)s1;
	to_find = (char *)s2;
	if (s1 == 0 && len == 0)
		return (NULL);
	if (to_find[0] == 0)
		return (c1);
	i = 0;
	while (c1[i] && i < len)
	{
		j = 0;
		while (c1[i + j] && c1[i + j] == to_find[j] && (i + j) < len)
		{
			j++;
			if (to_find[j] == '\0')
				return (c1 + i);
		}
		i++;
	}
	return (0);
}
/*int main ()
{
    char s1[] = "Foo Bar Baz";
    char s2[] = "a";
    printf("%s",ft_strnstr(s1,s2,7));
    return 0;
}*/