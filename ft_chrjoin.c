/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_chrjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aseppala <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/31 17:06:21 by aseppala          #+#    #+#             */
/*   Updated: 2019/10/31 17:07:17 by aseppala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_chrjoin(char c1, char c2)
{
	char	*s;

	if (!(s = ft_strnew(3)))
		return (0);
	*s = c1;
	*(s + 1) = c2;
	*(s + 2) = 0;
	return (s);
}
