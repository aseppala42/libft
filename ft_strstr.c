/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aseppala <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/17 13:08:42 by aseppala          #+#    #+#             */
/*   Updated: 2019/10/21 13:36:23 by aseppala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	if (needle == 0)
		return ((char *)haystack);
	if (*haystack == 0)
		return (0);
	if (*haystack == *needle)
		if (strncmp(haystack, needle, ft_strlen(needle)) == 0)
			return ((char *)haystack);
	return (ft_strstr(++haystack, needle));
}