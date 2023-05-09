/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabi <gabi@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 01:11:46 by gabi              #+#    #+#             */
/*   Updated: 2023/05/09 17:45:43 by gabi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* Recherche la première occurence d'une valeur typée int
** mais interprétée en tant que char, dans un bloc de mémoire.
** Comme on traite un bloc de mémoire 
** et non pas une chaîne de caractères AZT (à zéro terminal), 
** nous devons aussi spécifier à la fonction
** la taille du bloc de mémoire dans lequel réaliser la recherche.
*/

void	*ft_memchr(const void *s, int c, size_t n)
{
	while (n--)
	{
		if (*(unsigned char *)s == (unsigned char)c)
			return ((char *)s);
		s++;
	}
	return (NULL);
}
