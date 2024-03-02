/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namoussa <namoussa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 12:01:49 by namoussa          #+#    #+#             */
/*   Updated: 2023/11/17 15:27:22 by namoussa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t		i;
	const char	*string;

	i = 0;
	string = s;
	while (i < n)
	{
		if (string[i] == (char)c)
			return ((void *)(&string[i]));
		i++;
	}
	return (NULL);
}
/*int main() {
  char arr[] = "hell world";
  printf("%s",ft_memchr(arr,'o',20));
  return (0);
}*/
