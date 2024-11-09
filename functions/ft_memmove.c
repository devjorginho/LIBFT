/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jluiz-de <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 14:14:53 by jluiz-de          #+#    #+#             */
/*   Updated: 2024/11/07 11:51:49 by jluiz-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*c_src;
	unsigned char	*c_dest;

	c_src = (unsigned char *)src;
	c_dest = (unsigned char *)dest;
	if (!c_src || !c_dest || !n)
		return (dest);
	if (c_dest > c_src)
	{
		while(n--)
		c_dest[n] = c_src[n];
	}
	else
		ft_memcpy(c_dest, c_src, n);
	return (c_dest);
}
/*#include <stdio.h>
int	main()
{
	char	str1[20] = "This code is amazing";
	char	str2[20] = "Jorginho  is";
	ft_memmove(str2 + 10 , str1 + 10, 10);
	printf("%s", str2);
}     return (c_dest);
*/
