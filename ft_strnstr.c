/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aseppala <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/17 13:33:43 by aseppala          #+#    #+#             */
/*   Updated: 2019/10/21 13:46:47 by aseppala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	if (needle == 0)
		return ((char *)haystack);
	if (*haystack == 0 || len == 0)
		return (0);
	if (*haystack == *needle)
		if (strncmp(haystack, needle, ft_strlen(needle)) == 0)
			return ((char *)haystack);
	return (ft_strnstr(++haystack, needle, --len));
}