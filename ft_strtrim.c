/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabi <gabi@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 19:08:57 by gabi              #+#    #+#             */
/*   Updated: 2023/05/08 18:12:00 by gabi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** strrtrim removes all trailing whitespace characters from the end of a string
** As whitespace is counted everything for which isspace(3) returns true.
*/

static int	check_space(char c, char const *set)
{
	while (*set)
	{
		if ((*(set++) == c))
			return (1);
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	allocsize;
	char	*str;

	while (check_space(*s1, set))
		s1++;
	allocsize = ft_strlen(s1) + 1;
	while (allocsize > 1 && check_space(s1[allocsize - 2], set))
		allocsize--;
	str = malloc(sizeof(char) * allocsize);
	if (!str)
		return (NULL);
	ft_memcpy(str, s1, allocsize - 1);
	str[allocsize - 1] = '\0';
	return (str);
}
