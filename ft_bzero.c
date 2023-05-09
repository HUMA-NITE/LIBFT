/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabi <gabi@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/25 00:01:15 by gabi              #+#    #+#             */
/*   Updated: 2023/05/09 16:45:44 by gabi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** The bzero function sets the first n bytes of the area starting at s to zero.
** La fonction bzero met a 0 les n 1ers octets du bloc pointe par s
*/

void	ft_bzero(void *s, size_t len)
{
	ft_memset(s, 0, len);
}
