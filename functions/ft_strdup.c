/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jluiz-de <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 13:02:24 by jluiz-de          #+#    #+#             */
/*   Updated: 2024/11/08 13:06:54 by jluiz-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*new;
	int		size;

	size = 0;
	while (s[size] != '\0')
		size++;
	new = malloc(sizeof(char) * (size + 1));
	if (!new)
		return (NULL);
	while (size >= 0)
	{
		new[size] = s[size];
		size--;
	}
	return (new);
}
/*
int main(void)
{
	char	*array1 = "The car1.";
	char	*new1;
	char	*array22 = "the car2.";
	char	*new2;
	
	new1 = strdup(array1);
	new2 = ft_strdup(array2);
	printf("Original function->   String  :  %s    Dup:  %s \n", array1, new1);
	printf("              Address: %p       Address: %p\n\n", &array1, &new1);
	printf("MyFunction. ->    String:  %s    Dup:  %s \n", array2, new2);
	printf("              Address: %p       Address: %p\n", &array2, &new2);
}*/
