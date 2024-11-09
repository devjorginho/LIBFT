/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strncmp.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jluiz-de <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 12:20:02 by jluiz-de          #+#    #+#             */
/*   Updated: 2024/11/08 12:24:19 by jluiz-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n && (s1[i] || s2[i]))
	{
		if (s1[i] != s2[i])
			return (((unsigned char *)s1)[i] - ((unsigned char *)s2)[i]);
		i++;
	}
	return (0);
}

/*
int	main(void)
{
	char	array[20] = "The car";
	char	array2[20] = "The cAr";

	printf("Original -> %d\n", strncmp(array, array2, sizeof(array)));
	printf("MyFun -> %d\n", ft_strncmp(array, array2, sizeof(array)));
}
*/
