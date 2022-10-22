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

#include "../includes/ft_printf.h"

int	ft_sp_c(char *c)
{
	int	i;

	i = 0;
	i += write(1, &c, 1);
	return (i);
}

int	ft_sp_i_or_d(int digit)
{
	char	id;
	int		i;

	i = 0;
	while (digit < 0)
	{
		i += write(1, "-", 1);
		digit *= -1;
	}
	if (digit / 10)
		ft_sp_i_or_d(digit / 10);
	id = '0' + (digit % 10);
	i += write(1, &id, 1);
	return (i);
}

int	ft_sp_u(int digit)
{
	char	u;
	int		i;

	i = 0;
	if (digit / 10)
		ft_sp_u(digit / 10);
	u = '0' + (digit % 10);
	i += write(1, &u, 1);
	return (i);
}

int	ft_sp_x(char str, int digit)
{
	char			*baseux;
	char			*baselx;
	unsigned long	num;
	int				i;

	i = 0;
	if (str == 'X')
	{
		baseux = "0123456789ABCDEF";
		if (digit / 16)
			ft_sp_x(str, digit / 10);
		num = '0' + (digit % 16);
		i += write(1, &baseux[num], 1);
	}
	else
	{
		baselx = "0123456789abcdef";
		if (digit / 16)
			ft_sp_x(str, digit / 10);
		num = '0' + (digit % 16);
		i += write(1, &baselx[num], 1);
	}
	return (i);
}

int	ft_sp_p(char *pointer)
{
	char	*hexa;
	int		*address;
	int		i;

	i = 0;
	hexa = "0123456789ABCDEF";
	while (*pointer)
	{
		*address = *pointer;
		address++;
		pointer++;
	}
	if ((void *)pointer == NULL)
		return ((ft_putstr_fd("POINTER_NULL", 1)), 0);
	while (*address)
	{
		i += write(1, hexa[address], 1);
		address++;
	}
	return (i);
}
