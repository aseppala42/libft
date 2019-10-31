/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aseppala <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/23 16:41:30 by aseppala          #+#    #+#             */
/*   Updated: 2019/10/31 17:34:04 by aseppala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_mapiteri(char *s, char (*f)(unsigned int, char))
{
	int		i;

	i = 0;
	while (*s != 0)
		f(i++, *(s++));
}

char		*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*map;

	if (!(map = ft_strdup(s)))
		return (0);
	ft_mapiteri(map, f);
	return (map);
}
