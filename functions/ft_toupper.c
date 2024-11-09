/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jluiz-de <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 19:35:39 by jluiz-de          #+#    #+#             */
/*   Updated: 2024/11/07 12:23:52 by jluiz-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	return (c);
}
/*#include <stdio.h>
int	main()
{
	char	c1 = 'a';
	char	c2 = 'A';
	char	c3 = '1';

	printf("%c\n", ft_toupper(c1));
	printf("%c\n", ft_toupper(c2));
	printf("%c\n", ft_toupper(c3));

	return(0);
}*/
