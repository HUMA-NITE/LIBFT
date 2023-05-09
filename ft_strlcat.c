/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabi <gabi@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/25 00:32:49 by gabi              #+#    #+#             */
/*   Updated: 2023/05/09 17:33:21 by gabi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t len)
{
	size_t	dsti;
	size_t	srci;

	if (len == 0)
		return (ft_strlen(src));
	dsti = 0;
	srci = 0;
	while (dst[dsti] && dsti < len)
		dsti++;
	while (src[srci] && (dsti + srci) < (len - 1))
	{
		dst[dsti + srci] = src[srci];
		srci++;
	}
	if ((dsti + srci) < len)
		dst[dsti + srci] = '\0';
	while (src[srci])
		srci++;
	return (dsti + srci);
}
