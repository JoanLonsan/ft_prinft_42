/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_sp2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 03:34:22 by marvin            #+#    #+#             */
/*   Updated: 2022/10/20 03:34:22 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_sp_p(t_printf *tab, int *pointer)
{
	char	*hexa;
    char    *address;

    hexa = "0123456789ABCDEF";
    address = &pointer;
	if ((void *)pointer == NULL)
		ft_putstr_fd(POINTER_NULL, 1);
	tab->tlen += write(1, hexa[address], 1);
	else
	{
		ft_putstr("0x", pointer);

		ft_putnbr_base_ul(address, "0123456789abcdef", pointer);
	}
}
