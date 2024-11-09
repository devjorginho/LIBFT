/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jluiz-de <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 13:38:19 by jluiz-de          #+#    #+#             */
/*   Updated: 2024/11/08 13:39:40 by jluiz-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	long	number;
	char	*str;
	int		i;

	i = 0;
	number = n;
	str = (char *)malloc(sizeof(char) * (1 + 1));
	str[0] = '0';
	str[1] = '\0';
	if (n == 0 || !n)
		return (str);
	free (str);
	while ((n) && ++i)
		n = n / 10;
	if (number < 0 && ++i)
		number = number * -1;
	str = (char *)malloc(sizeof(char) * (i + 1));
	str[0] = '-';
	str[i--] = '\0';
	while (number > 0)
	{
		str[i--] = 48 + (number % 10);
		number = number / 10;
	}
	return (str);
}
/*
int	main(void)
{
	char	*str;

	str = ft_itoa(0);
	printf("My Function -> %s12\n", str);
	free (str);
}
*/
