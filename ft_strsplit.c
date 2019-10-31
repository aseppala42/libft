/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aseppala <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/30 14:22:09 by aseppala          #+#    #+#             */
/*   Updated: 2019/10/31 18:35:55 by aseppala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	**ft_split_and_add(char const *s, char c, \
		char **array, size_t count)
{
	if (*s == 0)
		return (array);
	if (*s == c)
		return (ft_split_and_add(++s, c, array, count));
	array = ft_realloc(array, count + 1, count + 2);
	if (!(array[count - 1] = ft_strndup(s, ft_strchrlen(s, c))))
		return (0);
	return (ft_split_and_add(s + ft_strchrlen(s, c), c, array, ++count));
}

char		**ft_strsplit(char const *s, char c)
{
	char	**array;

	if (!(array = ft_memalloc(sizeof(char *) * 2)))
		return (0);
	return (ft_split_and_add(s, c, array, 1));
}
