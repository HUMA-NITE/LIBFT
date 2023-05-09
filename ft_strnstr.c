/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabi <gabi@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/25 06:17:42 by gabi              #+#    #+#             */
/*   Updated: 2023/05/08 15:47:48 by gabi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

/*
** DESCRIPTION : Recherche une sous-chaine. La fonction strstr() cherche la
** 1ere occurrence de la sous-chaine s2 dans la chaine s1. la recherche se fait
** uniquement sur les n 1ers caracteres de s1.
**
** RETOUR : s1 si s2 est vide, NULL si s2 n'est pas trouve dans s1, sinon un
** pointeur sur le 1er caractere de la 1ere occurrence de s2.
*/

static int	equal(const char *s1, const char *s2, size_t len)
{
	size_t	i;

	i = 0;
	while (i < len && s2[i])
	{
		if (s1[i] != s2[i])
			return (0);
		i++;
	}
	return (1);
}

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	littlelen;
	size_t	i;

	if (*little == '\0')
		return ((char *)big);
	if (len == 0)
		return (NULL);
	littlelen = ft_strlen(little);
	i = 0;
	while (big[i] && i < len && littlelen <= len - i)
	{
		if (equal(big + i, little, len - i))
			return ((char *)big + i);
		i++;
	}
	return (NULL);
}
