/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jluiz-de <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 22:01:37 by jluiz-de          #+#    #+#             */
/*   Updated: 2024/11/04 22:19:53 by jluiz-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	n;
	int	signal;

	signal = 0;
	n = 0;
	while (*str == ' ' || *str == '\n' || *str == '\t' || *str == '\v'
		|| *str== '\f' || *str == '\r')
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			signal = -1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		n = (n * 10) + ((int) *str - 48);
		str++;
	}
	if (signal == -1)
		return (signal * n);
	return (0);
}
/*
#include <stdio.h>
int main(void)
{
	char test[30] = "123abui3";
	printf("atoi original >> %d\n", atoi(test));
	printf("Jorginho´s atoi  >> %d\n", ft_atoi(test));
}
*/
