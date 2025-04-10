/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jluiz-de <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 14:40:21 by jluiz-de          #+#    #+#             */
/*   Updated: 2024/11/09 15:16:59 by jluiz-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*ptr_s;

	ptr_s = (unsigned char *)s;
	while (n--)
		*ptr_s++ = c;
	return (s);
}
/*#include <stdio.h>
int	main(int argc, char *argv[])
{
	int i = 0;
	char *res;
	res = argv[1];
	if (argc == 2)
	{
		ft_memset(&res[3], 'r', 2); // Test with the arv: Gueaaa
		printf("%s", res);
	}
	return (0);
}*/
