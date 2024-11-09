/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jluiz-de <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 12:28:31 by jluiz-de          #+#    #+#             */
/*   Updated: 2024/11/08 12:33:09 by jluiz-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*string;
	unsigned char	character;
	size_t			i;

	character = (unsigned char) c;
	string = (unsigned char *) s;
	i = 0;
	while (n > 0)
	{
		if (string[i] == character)
			return (&string[i]);
		i++;
		n--;
	}
	return (NULL);
}
/*
int	main(void)
{
	char	array[40] = "DOTA IS BETTER THAN LOL";

	printf("myfunction -> %p\n", ft_memchr(array, 'I', 30));
	printf("Original -> %p\n", memchr(array, 'I', 30));
}
*/
