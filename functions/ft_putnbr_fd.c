/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jluiz-de <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 13:51:14 by jluiz-de          #+#    #+#             */
/*   Updated: 2024/11/08 13:51:49 by jluiz-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char	digit;
	long	nb;

	nb = n;
	if (nb < 0)
	{
		nb = -nb;
		write(fd, "-", 1);
	}
	if (nb >= 10)
		ft_putnbr_fd((nb / 10), fd);
	digit = nb % 10 + '0';
	write(fd, &digit, 1);
}
/*
int main(void)
{
    int num = -12345;
    ft_putnbr_fd(num, 1);
    return 0;
}
*/
