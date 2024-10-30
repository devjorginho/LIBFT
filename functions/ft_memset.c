/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jluiz-de <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 16:31:34 by jluiz-de          #+#    #+#             */
/*   Updated: 2024/10/30 14:11:48 by jluiz-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memset(void *s, int c, size_t n)
{
	if (n <= 0)
		return (s);
	*(unsigned char *)s = (unsigned char)c;
	ft_memset ((unsigned char *)s + 1, c, n - 1);
	return (s);
}
/*#include<stdio.h>
int	main()
{
	char array1[] = "Paulim";
	
	ft_memset(array1, 'A', 2);
	printf("%s\n", array1);
	return(0);
}*/
