/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabi <gabi@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/25 06:34:22 by gabi              #+#    #+#             */
/*   Updated: 2023/05/09 16:38:05 by gabi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** La fonction calloc() alloue la mémoire nécessaire
** pour un tableau de nmemb éléments de size octets, 
** et renvoie un pointeur vers la mémoire allouée. 
** Cette zone est remplie avec des zéros. Si nmemb ou si size est nulle, 
** calloc renvoie soit NULL ou un unique pointeur
** qui pourra être passé ultérieurement à free() avec succès.
*/

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;

	ptr = malloc(count * size);
	if (ptr == NULL)
		return (ptr);
	ft_bzero(ptr, size * count);
	return (ptr);
}
