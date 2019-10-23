/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aseppala <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/23 12:41:53 by aseppala          #+#    #+#             */
/*   Updated: 2019/10/23 12:46:55 by aseppala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	if (n == 1 || *(unsigned char *)s1 != *(unsigned char *)s2)
		return (*(unsigned char *)s1 - *(unsigned char *)s2);
	return (ft_strcmp(++s1, ++s2));
}
