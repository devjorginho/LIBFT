/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jluiz-de <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 12:04:19 by jluiz-de          #+#    #+#             */
/*   Updated: 2024/11/08 12:13:38 by jluiz-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;

	i = 0;
	while (s[i] != '\0')
		i++;
	while (i >= 0)
	{
		if (s[i] == (char)c)
			return (&((char *)s)[i]);
		i--;
	}
	return (NULL);
}
/*
int main(void)
{
	char	array[20] = "";

	printf("Original -> %d\n", strrchr(array, NULL));
	printf("Minhafu. -> %d\n", ft_strrchr(array, NULL));
	printf("Text size: '%s' -> %d\n", array, sizeof(array - 1));
}
*/
