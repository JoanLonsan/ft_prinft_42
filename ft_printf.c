/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcrescen <jcrescen@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 19:24:10 by jcrescen          #+#    #+#             */
/*   Updated: 2022/10/17 19:24:10 by jcrescen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_spcount(t_printf tab)
{
	int	i;

	i = 0;
	while (*tab->str)
	{
		if (*tab->str == '%')
		{
			++i;
			++tab->str;
		}
		else
			++tab->str;
	}
	return (i);
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

void	ft_str_printf(t_printf tab)
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

int	ft_printf(const char *str, ...)
{
	t_printf  tab;

	tab->str = (char *)str;
	tab->spcount = ft_spcount(tab);
	va_start(tab->args);
	ft_init_tab(tab);
	ft_str_printf(&tab);
	va_end(tab->args)
	return (tab->tlen);
}
