/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namoussa <namoussa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 13:19:28 by namoussa          #+#    #+#             */
/*   Updated: 2023/11/17 21:54:52 by namoussa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	if (fd < 0)
		return ;
	write(fd, &c, 1);
}
/*int main ()
{
	char c = 'd';
	int fd = open("foo.txt", O_CREAT, 0644);
	printf("%d\n",fd);
	
	ft_putchar_fd(c,fd);
	
	close(fd);
}*/
