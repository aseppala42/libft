/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aseppala <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/17 14:48:02 by aseppala          #+#    #+#             */
/*   Updated: 2019/10/23 11:16:38 by aseppala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dst, const char *src, size_t len)
{
	if (len != 0 && *src != 0)
	{
		*dst = *src;
		ft_strncpy(dst + 1, ++src, --len);
	}
	else if (len != 0 && *src == 0)
	{
		*dst = 0;
		ft_strncpy(dst + 1, src, --len);
	}
	return (dst);
}
