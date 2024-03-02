/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namoussa <namoussa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 12:30:50 by namoussa          #+#    #+#             */
/*   Updated: 2023/11/17 12:20:01 by namoussa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	d;
	size_t	s;
	size_t	result;

	if (size == 0 && dest == 0)
		return (ft_strlen(src));
	i = 0;
	d = ft_strlen(dest);
	s = ft_strlen(src);
	if (size > d)
		result = d + s;
	else
		result = s + size;
	while (src[i] && (d + 1) < size)
	{
		dest[d] = src[i];
		d++;
		i++;
	}
	dest[d] = '\0';
	return (result);
}
/*int main() {
    char dest[10] = "Helloip";
    const char src[10] = "world!";
    size_t desize = sizeof(dest);
   size_t result = ft_strlcat(dest, src, 6);
    printf("After ft_strlcat: dest = \"%s\"\n", dest);
    printf("Total length after ft_strlcat: %zu\n", result);

    return 0;
}*/
