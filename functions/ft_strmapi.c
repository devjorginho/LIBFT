/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jluiz-de <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 13:40:34 by jluiz-de          #+#    #+#             */
/*   Updated: 2024/11/08 13:42:23 by jluiz-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		i;
	char	*out;

	if (!s || !f)
		return (NULL);
	i = 0;
	while (s[i] != '\0')
		i++;
	out = malloc(sizeof(char) * i + 1);
	out[i] = '\0';
	i--;
	while (i >= 0)
	{
		out[i] = f(i, s[i]);
		i--;
	}
	return (out);
}
/*
char	put_zeros(unsigned int i, char c)
{
	if (i)
		return (c);
	return (c);
}

int	main(void)
{
	char str[7] = "hello.";

	printf("Str is -> %s\n", str);
	char *result = ft_strmapi(str, put_zeros);
	printf("Map use-> %s\n", result);
	free (result);
	return (0);
}*/
