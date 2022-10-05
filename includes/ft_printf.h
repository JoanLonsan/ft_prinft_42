/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 21:54:49 by marvin            #+#    #+#             */
/*   Updated: 2022/10/02 21:54:49 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
#define FT_PRINTF_H

#include "../libft/libft.h"
#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>

typedef struct  s_printf
{
    tab->width;
    tab->prec;
    tab->zero;
    tab->point;
    tab->dash;
    tab->tlen;
    tab->sign;
    tab->zero;
    tab->porc;
    tab->space;
}               t_prinft;

int     ft_printf(const char *, ...);
t_print *ft_init_tab(t_print *tab);
int     ft_eval_str(t_print *tab, const char *str, int i);
