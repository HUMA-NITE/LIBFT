/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabi <gabi@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 15:03:00 by gabi              #+#    #+#             */
/*   Updated: 2023/05/09 17:50:23 by gabi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static unsigned int	fill_number(char *buf, unsigned int nb)
{
	*buf = (nb % 10) + '0';
	if ((nb / 10) == 0)
		return (1);
	return (1 + fill_number(buf - 1, nb / 10));
}

void	ft_putnbr_fd(int nb, int fd)
{
	char			tab[11];
	unsigned int	nblen;

	if (nb < 0)
	{
		nblen = fill_number(tab + 10, (unsigned int)-nb);
		tab[10 - (nblen++)] = '-';
	}
	else
	{
		nblen = fill_number(tab + 10, (unsigned int)nb);
	}
	write(fd, tab + 11 - nblen, nblen);
}
