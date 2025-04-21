/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jde-carv <jde-carv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/11 10:47:31 by devjorginho       #+#    #+#             */
/*   Updated: 2025/04/20 19:46:14 by jde-carv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	unsigned char	*alloc;
	size_t			full_s;

	if (!nmemb || !size)
	{
		alloc = malloc(0);
		if (!alloc)
			return (NULL);
		return (alloc);
	}
	full_s = nmemb * size;
	if (nmemb != full_s / size)
		return (NULL);
	alloc = malloc(full_s);
	if (!alloc)
		return (NULL);
	ft_bzero(alloc, full_s);
	return ((void *)alloc);
}
