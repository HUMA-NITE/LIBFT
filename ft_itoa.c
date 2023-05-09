/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabi <gabi@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 16:07:31 by gabi              #+#    #+#             */
/*   Updated: 2023/05/09 18:10:04 by gabi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
** DESCRIPTION : Alloue (avec malloc(3)) et retourne une chaine de caractères
** “fraiche” terminée par un ’\0’ représentant l’entier n passé en paramètre.
** Les nombres négatifs doivent être gérés. Si l’allocation échoue,
** la fonction renvoie NULL.
**
** PARAM #1 : L’entier à convertir en une chaine de caractères.
**
** RETOUR : La chaine de caractères représentant l’entier passé en paramètre.
*/
static size_t	nb_len(int nb)
{
	int	c;

	if (nb == 0)
		return (1);
	c = 0;
	if (nb < 0)
		c++;
	while (nb)
	{
		nb /= 10;
		c++;
	}
	return (c);
}

static void	fill_number(char *buf, unsigned int bufsize, unsigned int nb)
{
	while (bufsize--)
	{
		buf[bufsize] = ((nb % 10) + '0');
		nb /= 10;
	}
}

char	*ft_itoa(int nb)
{
	unsigned int	nblen;
	char			*ptr;

	nblen = nb_len(nb);
	ptr = (char *)malloc(sizeof(char) * (nblen + 1));
	if (!ptr)
		return (NULL);
	ptr[nblen] = '\0';
	if (nb < 0)
	{
		*ptr = '-';
		fill_number(ptr + 1, nblen - 1, (unsigned int)-nb);
	}
	else
	{
		fill_number(ptr, nblen, (unsigned int)nb);
	}
	return (ptr);
}

// int main(void)
// {
//     int n = 0;
//     char *str = ft_itoa(n);
//     printf("n = %d, str = %s\n", n, str);
//     free(str);
//     return 0;
// }