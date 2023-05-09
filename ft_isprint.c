/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabi <gabi@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/25 00:01:00 by gabi              #+#    #+#             */
/*   Updated: 2023/05/09 16:31:06 by gabi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Return 1 if c is printable, 0 if not
** Retourne 1 si le caractere c est imprimable (entre 32 et 126 en valeur ASCII)
*/

int	ft_isprint(int c)
{
	return (c >= 32 && c <= 126);
}
