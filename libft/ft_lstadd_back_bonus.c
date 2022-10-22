/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wip_lstadd_back.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 00:12:17 by marvin            #+#    #+#             */
/*   Updated: 2022/09/29 00:12:17 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*aux;

	aux = ft_lstlast(*lst);
	if (!aux)
		*lst = new;
	else
		aux->next = new;
}
