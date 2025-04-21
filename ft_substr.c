/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jde-carv <jde-carv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/11 12:43:09 by devjorginho       #+#    #+#             */
/*   Updated: 2025/04/15 18:42:37 by jde-carv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*strnew;
	size_t	slen;
	size_t	i;

	i = 0;
	if (!s)
		return (NULL);
	slen = ft_strlen(s);
	if (start >= slen)
		return (ft_calloc(1, sizeof(char)));
	if (start + len > slen)
		len = slen - start;
	strnew = malloc(sizeof(char) * (len + 1));
	if (!strnew)
		return (NULL);
	while (i < len)
	{
		strnew[i] = s[start + i];
		i++;
	}
	strnew[i] = '\0';
	return (strnew);
}
