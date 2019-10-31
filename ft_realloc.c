/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_realloc.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aseppala <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/30 15:29:32 by aseppala          #+#    #+#             */
/*   Updated: 2019/10/31 18:29:33 by aseppala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_realloc(void *ptr, size_t old_size, size_t new_size)
{
	char	*re_ptr;

	if (!(re_ptr = ft_memalloc(new_size)) || old_size > new_size)
		return (0);
	ft_memcpy(re_ptr, ptr, old_size);
	free(ptr);
	return (re_ptr);
}
