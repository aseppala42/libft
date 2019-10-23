/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aseppala <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/22 15:59:18 by aseppala          #+#    #+#             */
/*   Updated: 2019/10/22 17:34:18 by aseppala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *restrict dst, const void *restrict src, size_t n)
{
	if (n == 0)
		return (dst);
	*(unsigned char *)dst = *(unsigned char *)src;
	ft_memcpy(++dst, ++src, --n);
	return (dst);
}
