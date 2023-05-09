/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabi <gabi@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/25 00:00:56 by gabi              #+#    #+#             */
/*   Updated: 2023/05/09 16:46:19 by gabi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** DESCRIPTION : La fonction memset() remplit les n premiers octets de la zone
** mémoire pointée par b avec l'octet c.
**
** VALEUR RENVOYEE : La fonction memset() renvoie un pointeur sur la zone
** mémoire b.
*/

void	*ft_memset(void *s, int c, size_t len)
{
	void	*start;

	start = s;
	while (len--)
		*(unsigned char *)(start++) = (unsigned char)c;
	return (s);
}
