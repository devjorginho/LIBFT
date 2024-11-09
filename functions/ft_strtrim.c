/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jluiz-de <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 13:20:20 by jluiz-de          #+#    #+#             */
/*   Updated: 2024/11/08 13:27:01 by jluiz-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_check(char c, char const *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		start;
	int		end;
	char	*out;

	i = 0;
	start = 0;
	if (!s1 || !set)
		return (NULL);
	end = ft_strlen(s1);
	while (s1[start] && ft_check(s1[start], set))
		start++;
	while (end > start && ft_check(s1[end - 1], set))
		end--;
	out = (char *)malloc(sizeof(char) * (end - start + 1));
	if (!out)
		return (NULL);
	while (start < end)
		out[i++] = s1[start++];
	out[i] = '\0';
	return (out);
}
/*
int	main(void)
{
	char	*text;

	text = ft_strtrim("Jorginho is acarmazing.", "car");
	printf("\nResultado: %s\n", text);
	free (text);
}
*/
