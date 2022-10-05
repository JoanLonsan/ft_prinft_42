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

#include "libft.h"

int ft_printf(const char *str, ...)
{
    int i;
    int len; //return value.
    t_print *tab;

    tab = (t_print *)malloc(sizeof(t_print));                        
    if (!tab)
    return (-1);
    ft_init_tab(tab)
    va_start(tab->args, str);
    i = 0;
    len = 0;
    while ([str[i]])
    {
        if (str[i] == '%')
            i = ft_lf_str(tab, str, i + 1); // i+1 -> look char after %
        else
        {
            write(1, &str[i++]);
            len++;
        }
        i++;
    }
    va_end(tab->args);
    len += tab->tlen;
    free(tab);
    return (len);
}
