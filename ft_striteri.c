/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabi <gabi@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 14:36:46 by gabi              #+#    #+#             */
/*   Updated: 2023/05/08 15:17:24 by gabi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	i = 0;
	while (s[i])
	{
		f(i, s + i);
		i++;
	}
}

// void print_char_index(unsigned int index, char *c)
// {
// 	printf("Caractère à l'index %u : %c\n", index, *c);
// }

// int main()
// {
// 	char str[] = "Hello, world!";
// 	ft_striteri(str, print_char_index);
// 	return 0;
// }