/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init_tab.C                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 09:43:49 by marvin            #+#    #+#             */
/*   Updated: 2022/10/04 09:43:49 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

t_print *ft_init_tab(t_print *tab)
{
    tab->width = 0;
    tab->prec = 0;
    tab->zero = 0;
    tab->point = 0;
    tab->dash = 0;
    tab->tlen = 0;
    tab->sign = 0;
    tab->zero = 0;
    tab->porc = 0;
    tab->space = 0;
    return (tab);
}
