/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jluiz-de <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 13:43:52 by jluiz-de          #+#    #+#             */
/*   Updated: 2024/11/08 13:45:03 by jluiz-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	size_t	i;

	if (!s || !f)
		return ;
	i = 0;
	while (*s)
		f(i++, s++);
}
/*#include "libft.h"
#include <stdio.h>

void ft_toupper(unsigned int i, char *c)
{
    if (i % 2 == 0)
        *c = *c - 32; // Transforma em maiúscula
}

int main(void)
{
    char str[] = "hello world";

    ft_striteri(str, ft_toupper);
    printf("Resultado: %s\n", str);

    return 0;
}*/
