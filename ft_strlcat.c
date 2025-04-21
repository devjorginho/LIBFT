/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jde-carv <jde-carv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 11:31:46 by jde-carv          #+#    #+#             */
/*   Updated: 2025/04/15 18:42:15 by jde-carv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dlen;
	size_t	slen;
	size_t	freebytes;
	size_t	i;

	i = 0;
	dlen = ft_strlen(dst);
	slen = ft_strlen(src);
	freebytes = size - dlen - 1;
	if (dlen >= size)
		return (size + slen);
	while (src[i] && i < freebytes)
	{
		dst[dlen + i] = src[i];
		i++;
	}
	dst[dlen + i] = '\0';
	return (dlen + slen);
}
