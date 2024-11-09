/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jluiz-de <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 13:47:28 by jluiz-de          #+#    #+#             */
/*   Updated: 2024/11/08 13:47:30 by jluiz-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <unistd.h>
//#include <stdlib.h>
//#include <fcntl.h>

void	ft_putstr_fd(char *s, int fd)
{
	if (fd < 0)
		return ;
	while (*s)
		write (fd, s++, 1);
}
/*
int	main(void)
{
	int	fd;

	fd = open("Teste.txt", O_WRONLY);
	ft_putstr_fd("Exemplo 1.", fd);
	close(fd);
}
*/
