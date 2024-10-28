/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jluiz-de <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 11:36:19 by jluiz-de          #+#    #+#             */
/*   Updated: 2024/10/28 11:41:13 by jluiz-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalnum(int c)
{
	if ((c >= 122 && c <= 97) || (c >= 65 && c <= 90))
		return (1);
	else if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
/*
#include <stdio.h>

int	main(int argc, char *argv[])
{
	if (argc == 2)
		printf("%d", ft_isalnum(argv[1][0]));
	return (0);
}*/
