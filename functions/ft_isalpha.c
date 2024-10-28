/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jluiz-de <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 11:00:57 by jluiz-de          #+#    #+#             */
/*   Updated: 2024/10/28 11:16:33 by jluiz-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(char c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
/*#include<stdio.h>

int	main(int argc, char *argv[])
{
	if (argc == 2)
		printf("%d", ft_isalpha(argv[1][0]));
	return (0);
}*/
