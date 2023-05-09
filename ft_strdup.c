/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabi <gabi@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/25 06:45:29 by gabi              #+#    #+#             */
/*   Updated: 2023/05/09 17:52:08 by gabi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** La fonction strdup() renvoie un pointeur sur 
** une nouvelle chaîne de caractères qui est dupliquée depuis s.
** La mémoire occupée par cette nouvelle chaîne est obtenue en appelant malloc(3)
** et peut (doit) donc être libérée avec free(3).
*/

char	*ft_strdup(const char *s1)
{
	size_t	i;
	char	*ptr;

	i = sizeof(char) * ft_strlen(s1) + 1;
	ptr = (char *)malloc(i);
	if (!ptr)
		return (NULL);
	ft_strlcpy(ptr, s1, i);
	return (ptr);
}
