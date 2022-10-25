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

int		ft_printf(const char *, ...);
int		ft_sp_c(char *c);
int		ft_sp_i_or_d(int digit);
int		ft_sp_u(int digit);
int		ft_sp_x(char str, int digit);
int		ft_sp_p(size_t pointer);
int		ft_sp_s(char *str);

#endif
