/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namoussa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 11:34:18 by namoussa          #+#    #+#             */
/*   Updated: 2023/11/08 11:07:49 by namoussa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char	*dest;
	char	*serc;
	size_t	i;

	if (dst == src)
		return (dst);
	if (!dst && !src)
		return (dst);
	dest = (char *) dst;
	serc = (char *) src;
	i = 0;
	while (i < n)
	{
		dest[i] = serc[i];
		i++;
	}
	return (dst);
}
/*int main ()
{
    char src[] = "hello world";
    printf("%s",ft_memcpy(src,src+2,3));
    return 0;
}*/
