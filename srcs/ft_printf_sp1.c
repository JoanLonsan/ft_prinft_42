/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_sp1.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 03:02:43 by marvin            #+#    #+#             */
/*   Updated: 2022/10/19 03:02:43 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_sp_c(t_printf *tab, char *char)
{
    tab->tlen += write(1, &c, 1);s
}

void	ft_sp_i_or_d(t_printf *tab, int int)
{
    char    id;

    while (digit < 0)
    {
        tab->tlen += write(1,'-', 1);
        digit *= -1;
    }
    if (digit / 10)
		ft_sp_i_or_d(tab, (digit / 10));
	id = '0' + (digit % 10);
	tab->tlen += write(1, id, 1);
}

void	ft_sp_u(t_printf *tab, int digit)
{
	char    u;

    if (digit / 10)
        ft_sp_u(tab, digit / 10);
    u = '0' + (digit % 10);
    tab->tlen += write(1, u, 1);
}

void	ft_sp_x_or_X(t_printf *tab, int digit)
{
	unsigned long	num;

	if (tab->str == 'X')
	{
		char *BASEX;

		BASEX = "0123456789ABCDEF";
		if (num /16)
			ft_sp_x_or_X(tab, num / 10);
		num = '0' + (num % 16);
		tab->tlen += write(1, BASEX[num], 1);
	}
	else
	{
		char *basex;

		basex = "0123456789abcdef";
		if (num /16)
			ft_sp_x_or_X(tab, num / 10);
		num = '0' + (num % 16);
		tab->tlen += write(1, BASEX[num], 1);
	}
}
