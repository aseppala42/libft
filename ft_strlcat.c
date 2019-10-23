/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aseppala <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/22 13:50:06 by aseppala          #+#    #+#             */
/*   Updated: 2019/10/22 14:09:11 by aseppala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *restrict dst, const char *restrict src, size_t dstsize)
{
	size_t	len;

	len = ft_strlen(dst);
	if (dstsize == 0 || len > dstsize)
		return (0);
	ft_strncpy(ft_strchr(dst, 0), src, dstsize - len - 1);
	return (len + ft_strlen(src));
}
