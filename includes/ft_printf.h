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
# define FT_PRINTF_H
# include "../libft/libft.h"
# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>

typedef struct s_printf
{
	int		spcount;
	int		width;
	char	zero;
	char	point;
	char	dash;
	int		tlen;
	char	sign;
	char	porc;
	char	space;
	va_list	args;
}				t_printf;

int		ft_printf(const char *, ...);
int		ft_lfsp_str(t_print *tab);
