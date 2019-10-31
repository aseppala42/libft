/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aseppala <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/30 13:50:52 by aseppala          #+#    #+#             */
/*   Updated: 2019/10/31 18:23:54 by aseppala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	if (n == -2147483648)
		return ("-2147483648");
	if (n < 0)
		return (ft_strjoin("-", ft_itoa(-n)));
	if (n > 9)
		return (ft_strjoin(ft_itoa(n / 10), ft_chrjoin(n % 10 + '0', 0)));
	return (ft_chrjoin(n % 10 + '0', 0));
}
