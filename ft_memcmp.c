/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabi <gabi@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 01:16:44 by gabi              #+#    #+#             */
/*   Updated: 2023/05/09 17:20:27 by gabi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Cette fonction permet de comparer le contenu de deux 
** blocs de mémoire spécifiés par les deux premiers paramètres de la fonction.
** Le troisième paramètre, size
** permet de spécifier le nombre d'octets sur lequel comparer les deux blocs.
** Les octets des deux blocs sont comparés deux à deux.
** Tant que les deux octets comparés sont égaux
** la fonction passe aux deux suivants.
** Si les deux octets comparés sont différents
** alors la fonction renvérra 
** lequel des deux blocs est le plus petit en termes de contenu.
*/

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	while (n--)
	{
		if (*(char *) s1 != *(char *)s2)
			return (*(unsigned char *)s1 - *(unsigned char *)s2);
		s1++;
		s2++;
	}
	return (0);
}
