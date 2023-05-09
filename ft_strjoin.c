/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabi <gabi@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 19:08:00 by gabi              #+#    #+#             */
/*   Updated: 2023/05/09 17:32:43 by gabi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	s1len;
	size_t	s2len;
	size_t	totlen;
	char	*result;

	s1len = ft_strlen(s1);
	s2len = ft_strlen(s2);
	totlen = (s1len + s2len);
	result = malloc(sizeof(char) * totlen + 1);
	if (!result)
		return (NULL);
	ft_memcpy(result, s1, s1len);
	ft_memcpy(result + s1len, s2, s2len);
	*(result + s1len + s2len) = '\0';
	return (result);
}

// int main(void)
// {
//     char *tot;
//     char str1[] = "Je suis ";
//     char str2[] = "Humanite";
//  
//     tot = ft_strjoin(str1, str2);
//     printf("le resultat de la concatenation : %s\n", tot);
// }