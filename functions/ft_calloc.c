/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jluiz-de <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 12:52:15 by jluiz-de          #+#    #+#             */
/*   Updated: 2024/11/08 13:02:13 by jluiz-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	unsigned char	*p;
	size_t			i;
	int				count;

	count = nmemb * size;
	p = malloc(count);
	if (!p)
		return (NULL);
	i = 0;
	while (count--)
	{
		p[i] = 0;
		i++;
	}
	return ((void *)p);
}
/*
int	main(void)
{
	int	*p1;
	int	*p2;
	int	i1;
	int	i2;

	p1 = (int *) calloc(5, sizeof(int));
	for(i1 = 0; i1 < 5; i1++)
	{
		printf("Original -> Memory ad of p1[%i] = %p |", i1, &p1[i1]);
		printf("| p1 Value [%i] = %i\n",  i1, *(p1+i1));
	}
	printf("\n");
	p2 = (int *) ft_calloc(5, sizeof(int));
	for(i2 = 0; i2 < 5; i2++)
	{
		printf("Myfunction. -> Memory add of p2[%i] = %p |", i2, &p2[i2]);
		printf("| P2 Value [%i] = %i\n",  i2, *(p2+i2));
	}
}
*/
