/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aseppala <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/23 17:37:29 by aseppala          #+#    #+#             */
/*   Updated: 2019/10/30 13:48:09 by aseppala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_iswhitespace(int c)
{
	if (c == '\t' || c == '\n' || c == ' ')
		return (c);
	return (0);
}

static int	ft_wslen(char *s)
{
	if (ft_iswhitespace(*s))
		return (1 + ft_wslen(--s));
	return (0);
}

char		*ft_strtrim(char const *s)
{
	if (*s == 0)
		return (0);
	if (ft_iswhitespace(*s))
		return (ft_strtrim(++s));
	return (ft_strndup(s, ft_strlen(s) - ft_wslen(ft_strchr(s, 0) - 1)));
}
