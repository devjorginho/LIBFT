/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jluiz-de <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 13:48:47 by jluiz-de          #+#    #+#             */
/*   Updated: 2024/10/30 14:10:50 by jluiz-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char		*d;
	const unsigned char	*s;

	s = (const unsigned char *)src;
	d = (unsigned char *)dest;
	if (n == 0 || dest == src)
		return (dest);
	while (n--)
		*d++ = *s++;
	return (dest);
}
/*#include <stdio.h>
#include <stdlib.h>
int	main()
{
	unsigned char *str1 = malloc(10);
	const	unsigned char str2[] = "Jorge" ;

	memcpy(str1, str2, 3);
	printf("original memcpy implementation : %s\n", str1);
	ft_memcpy(str1, str2, 3);
	printf("My memcpy implementation : %s", str1);

	return(0);
}*/
