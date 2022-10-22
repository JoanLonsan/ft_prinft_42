/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_sp2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcrescen <jcrescen@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 16:14:44 by jcrescen          #+#    #+#             */
/*   Updated: 2022/10/22 16:36:13 by jcrescen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int	ft_sp_s(char *str)
{
	int	i;

	i = 0;
	i += write(1, str, ft_strlen(str));
	return (i);
}
