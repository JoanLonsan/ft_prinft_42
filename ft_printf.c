/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 21:52:49 by marvin            #+#    #+#             */
/*   Updated: 2022/10/02 21:52:49 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void    ft_lfsp_str(t_printf *tab)
{
	while (*tab->str)
    // BonusTry Innitialized on comments.
        /*if (*tab->str == '-')
            ft_flag_minus(tab, va_arg(p->args, ?????));
        else if (*tab->str == '0')
            ft_flag_zero(tab, va_arg(p->args, ?????));
        else if (*tab->str == '+')
            ft_flag_plus(tab, va_arg(p->args, ?????));
        else if (*tab->str == '#')
            ft_flag_hashtag(tab, va_arg(p->args, ?????));
        else if (*tab->str == ' ')
            ft_flag_space(tab, va_arg(p->args, ?????));
        else if (*tab->str >= '0' && *tab->str <= '9')
            ft_width(tab, va_arg(p->args, int));*/
		else if (*tab->str == 'c')
			ft_sp_c(tab, va_arg(p->args, char));
		else if (*tab->str == 's')
			ft_sp_s(tab, va_arg(p->args, char *));
		else if (*tab->str == 'p')
			ft_sp_p(tab, va_arg(p->args, char));
		else if (*tab->str == 'd' || *tab->str == 'i')
			ft_sp_i_or_d(tab, va_arg(p->args, int));
		else if (*tab->str == 'u')
			ft_sp_u(tab, va_arg(p->args, int));
		else if (*tab->str == 'x' || *tab->str == 'X')
			ft_sp_x_or_X(tab, va_arg(p->args, unsigned int));
		else if (*tab->str == '%')
			ft_sp_perc(tab, va_arg(p->args, char));
}

t_print *ft_init_tab(t_print *tab)
{
    tab->spcount = 0;
    tab->width = 0;
    tab->zero = 0;
    tab->point = 0;
    tab->dash = 0;
    tab->tlen = 0;
    tab->sign = 0;
    tab->porc = 0;
    tab->space = 0;
    return (tab);
}

void    ft_str_printf(t_printf tab)
{
    tab->tlen = 0;
    while (*tab->str)
    {
        if (*tab->str == '%')
        {
            ft_lfsp_str(&tab);
        }
        else
            tab->tlen += write(1, p->str, 1);
        ++tab->str;
    }
}

// If specifiers count are needed. Also ft call commented on ft_printf.
/*int     ft_spcount(t_printf tab)
{
    int i;

    i = 0;
    while(*tab->str)
    {
        if (*tab->str == '%')
        {
            ++i;
            if (*tab->str + 1 == '%')
                ++tab->str;
                ++tab->str;
            else
                ++tab->str;
        }
        else
            ++tab->str;
    }
    return (i);
}*/

int ft_printf(const char *str, ...)
{
	t_printf  tab;

	tab->str = (char *)str;
	//tab->spcount = ft_spcount(tab);
	va_start(tab->args);
	ft_init_tab(tab);
	ft_str_printf(&tab);
	va_end(tab->args);
	return (tab->tlen);
}
