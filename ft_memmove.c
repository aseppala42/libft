/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aseppala <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/22 17:51:03 by aseppala          #+#    #+#             */
/*   Updated: 2019/10/23 12:32:39 by aseppala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	*ft_back_to_front(void *dst, const void *src, size_t len)
{
	if (len == 0)
		return (dst);
	ft_back_to_front(++dst, ++src, --len);
	*(unsigned char *)dst = *(unsigned char *)src;
	return (dst);
}

void		*ft_memmove(void *dst, const void *src, size_t len)
{
	if ((unsigned int)src < (unsigned int)dst && (unsigned int)src + len > (unsigned int)dst)
		return (ft_back_to_front(dst, src, len));
	else
		return (ft_memcpy(dst, src, len));
}
