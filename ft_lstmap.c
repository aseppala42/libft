/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aseppala <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/30 18:26:42 by aseppala          #+#    #+#             */
/*   Updated: 2019/10/30 19:02:58 by aseppala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	if (lst == 0)
		return (0);
	return (ft_lstadd(&ft_lstmap(lst->next, f), f(ft_lstnew(lst->content, lst->content_size))));
}
