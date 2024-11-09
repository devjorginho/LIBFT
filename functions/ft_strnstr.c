/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jluiz-de <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 12:38:32 by jluiz-de          #+#    #+#             */
/*   Updated: 2024/11/08 12:49:07 by jluiz-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t		i;
	size_t		size;

	i = 0;
	size = 0;
	while (needle[size] != '\0')
		size++;
	if (needle == NULL || size == 0)
		return ((char *)haystack);
	if (size > len)
		return (NULL);
	while (i < len)
	{
		if (ft_strncmp((char *)&haystack[i], needle, size) == 0)
		{
			if (i + size > len)
				return (NULL);
			return ((char *)&haystack[i]);
		}
		i++;
	}
	return (NULL);
}
/*
int main(void)
{
	char	array1[20] = "JORGINHO IS AMAZING";
	char	array2[20] = "IS";

	printf("MyFunction: -> %s\n", ft_strnstr(array1, array2, 19));
	printf("size mf: %d\n", sizeof(ft_strnstr(array1, array2, 19)));
	printf("Original: -> %s\n", strnstr(array1, array2, 19));
	printf("size origi: %d\n", sizeof(strnstr(array1, array2, 19)));

}
*/
