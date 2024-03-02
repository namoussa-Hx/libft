/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namoussa <namoussa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 12:44:21 by namoussa          #+#    #+#             */
/*   Updated: 2023/11/17 15:39:37 by namoussa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*t1;
	unsigned char	*t2;
	int				i;

	i = 0;
	t1 = (unsigned char *)s1;
	t2 = (unsigned char *)s2;
	if (!s1 && !s2)
		return (0);
	while (n)
	{
		if (t1[i] != t2[i])
			return (t1[i] - t2[i]);
		i++;
		n--;
	}
	return (0);
}
/*int main ()
{
    int a = 5349534;
    int b = 3242342;
    printf("%d\n",ft_memcmp(&a,&b,2));
	printf("%d\n",memcmp(&a,&b,2));
    return 0;
}*/
