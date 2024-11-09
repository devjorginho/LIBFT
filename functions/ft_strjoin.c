/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jluiz-de <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 13:17:16 by jluiz-de          #+#    #+#             */
/*   Updated: 2024/11/08 13:19:19 by jluiz-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*out;
	int		i1;
	int		i2;

	i1 = 0;
	i2 = 0;
	if (!s1 || !s2)
		return (NULL);
	while (s1[i1] != '\0')
		i1++;
	while (s2[i2] != '\0')
		i2++;
	out = malloc(sizeof(char) * (i1 + i2 + 1));
	if (!out)
		return (NULL);
	out[i1 + i2] = '\0';
	while (--i2 >= 0)
		out[i1 + i2] = s2[i2];
	while (--i1 >= 0)
		out[i1] = s1[i1];
	return (out);
}
/*
int	main(void)
{
	char	array1[] = "Hello ";
	char	array2[] = "World.";
	char	*str;

	str = ft_strjoin(array1, array2);
	printf("The text: %s\n", str);
	free (str);
}
*/
