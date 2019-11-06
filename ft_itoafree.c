/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aseppala <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/06 13:00:16 by aseppala          #+#    #+#             */
/*   Updated: 2019/11/06 13:01:04 by aseppala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoafree(int n)
{
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	if (n < 0)
		return (ft_strjoindel(ft_chrjoin('-', 0), ft_itoafree(-n)));
	if (n > 9)
		return (ft_strjoindel(ft_itoafree(n / 10), ft_chrjoin(n % 10 + '0', 0)));
	return (ft_chrjoin(n % 10 + '0', 0));
}
