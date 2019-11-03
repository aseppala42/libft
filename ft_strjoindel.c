/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoindel.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aseppala <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/03 12:20:49 by aseppala          #+#    #+#             */
/*   Updated: 2019/11/03 12:33:02 by aseppala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoindel(char *s1, char *s2)
{
	char	*str;

	if (s1 == 0 && s2 == 0)
		return (0);
	if (s1 == 0 && s2 != 0)
	{
		str = ft_strdup(s2);
		ft_strdel(&s2);
		return (str);
	}
	if (s1 != 0 && s2 == 0)
	{
		str = ft_strdup(s1);
		ft_strdel(&s1);
		return (str);
	}
	if (!(str = ft_strnew(ft_strlen(s1) + ft_strlen(s2))))
		return (0);
	ft_strcpy(str, s1);
	ft_strcat(str, s2);
	ft_strdel(&s1);
	ft_strdel(&s2);
	return (str);
}
