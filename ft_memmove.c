/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabi <gabi@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/25 00:18:37 by gabi              #+#    #+#             */
/*   Updated: 2023/05/09 18:00:57 by gabi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** DESCRIPTION : La fonction memmove() copie n octets depuis la zone mémoire
** src vers la zone mémoire dest. Les deux zones peuvent se chevaucher :
** la copie se passe comme si les octets de src étaient d'abord copiés dans
** une zone temporaire qui ne chevauche ni src ni dest, et les octets sont
** ensuite copiés de la zone temporaire vers dest.
**
** VALEUR RENVOYEE : La fonction memmove() renvoie un pointeur sur dest.
*/

static void	*ft_rev_memmove(void *dest, const void *src, size_t size)
{
	while (size--)
		((char *)dest)[size] = ((char *)src)[size];
	return (dest);
}

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	if (!len)
		return (dest);
	if (dest > src)
		return (ft_rev_memmove(dest, src, len));
	if (dest < src)
		return (ft_memcpy(dest, src, len));
	return (dest);
}
