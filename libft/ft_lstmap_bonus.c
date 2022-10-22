/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wip_ft_lstmap.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 00:13:51 by marvin            #+#    #+#             */
/*   Updated: 2022/09/29 00:13:51 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*dst;
	t_list	*aux;

	dst = 0;
	while (lst)
	{
		aux = ft_lstnew(f(lst->content));
		if (!aux)
		{
			ft_lstclear(&dst, del);
			return (NULL);
		}
		ft_lstadd_back(&dst, aux);
		lst = lst->next;
	}
	return (dst);
}
