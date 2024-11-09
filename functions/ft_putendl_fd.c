/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jluiz-de <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 13:48:15 by jluiz-de          #+#    #+#             */
/*   Updated: 2024/11/08 13:48:43 by jluiz-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	int	i;

	i = 0;
	if (fd < 0 || !s)
		return ;
	while (s[i] != '\0')
		write(fd, &s[i++], 1);
	write(fd, "\n", 1);
}
/*
int	main(void)
{
	char	array[7] = "Test.";
	int		fd;

	fd = open("test.txt", O_RDWR);
	if (fd < 0)
		return (0);
	ft_putendl_fd(array, fd);
	return (0);
}
*/
