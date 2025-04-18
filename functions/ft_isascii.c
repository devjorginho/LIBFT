/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jluiz-de <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 11:42:23 by jluiz-de          #+#    #+#             */
/*   Updated: 2024/11/04 21:54:47 by jluiz-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}
/*#include <stdio.h>
int	main()
{
	char	l1 = 'Z';
	int	n1 = 1;
	int	n2 = 256;
	int	n3 = -1;

	printf("%d\n", ft_isascii(l1));
	printf("%d\n", ft_isascii(n1));
	printf("%d\n", ft_isascii(n2));
	printf("%d\n", ft_isascii(n3));
	return (0);
}*/
