/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jluiz-de <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 12:16:20 by jluiz-de          #+#    #+#             */
/*   Updated: 2024/11/09 16:14:41 by jluiz-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			return ((char *)&s[i]);
		i++;
	}
	if (s[i] == '\0' && c == '\0')
		return ((char *)&s[i]);
	return (NULL);
}
/*#include <stdio.h>
int	main(void)
{
	char	array[20] = "Jorginho";
	char *res = ft_strchr(array, 'i');
	if (res != NULL)
	{
		printf("The character 'i'  was found at: %s\n", array);
		printf("Its first occurrence was here %s", res);
	}
	else
		printf("The character 'i' was not found");
	return (0);
}*/
