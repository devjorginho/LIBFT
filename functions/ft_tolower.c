/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jluiz-de <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 19:35:39 by jluiz-de          #+#    #+#             */
/*   Updated: 2024/10/30 14:13:07 by jluiz-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (c + 32);
	else
		return (c);
}
/*#include <stdio.h>
int	main()
{
	char	c1 = 'a';
	char	c2 = 'A';
	char	c3 = '1';

	printf("%c\n", ft_tolower(c1));
	printf("%c\n", ft_tolower(c2));
	printf("%c\n", ft_tolower(c3));

	return(0);
}*/
