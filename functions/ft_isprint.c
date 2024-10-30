/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jluiz-de <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 11:57:29 by jluiz-de          #+#    #+#             */
/*   Updated: 2024/10/30 15:27:30 by jluiz-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isprint(int c)
{
	if (n >= 32 && n <= 126)
		return (1);
	else
		return (0);
}
/*#include <stdio.h>
int	main()
{
	char	npc1 = '\n';
	char	npc2 = '\0';
	char	pc1 = '1';
	char	pc2 = ' ';
	
	printf("%d", ft_isprint(npc1));
	printf("%d", ft_isprint(npc2));
	printf("%d", ft_isprint(pc1));
	printf("%d", ft_isprint(pc2));
}*/
