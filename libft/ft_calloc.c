/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcrescen <jcrescen@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 15:21:32 by jcrescen          #+#    #+#             */
/*   Updated: 2022/09/30 11:07:08 by jcrescen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*a;
	size_t	x;

	x = count * size;
	if (x == 1 && count != 1)
		return (NULL);
	a = (void *)malloc(x);
	if (!a)
		return (NULL);
	ft_bzero(a, count);
	return (a);
}
