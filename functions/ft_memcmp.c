/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jluiz-de <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 12:34:59 by jluiz-de          #+#    #+#             */
/*   Updated: 2024/11/08 12:36:39 by jluiz-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*texto1;
	unsigned char	*texto2;

	texto1 = (unsigned char *) s1;
	texto2 = (unsigned char *) s2;
	while (n > 0)
	{
		if (*texto1 != *texto2)
			return (*texto1 - *texto2);
		n--;
		texto1++;
		texto2++;
	}
	return (0);
}
/*
int main(void)
{
    char    array1[20] = "DOTA IS BETTER";
    char    array2[20] = "DOTA IS bETTER";
    
    printf("Original -> %d\n", memcmp(array1, array2, 5));
    printf("Myfunction -> %d\n", ft_memcmp(array1, array2, 5));
}*/
