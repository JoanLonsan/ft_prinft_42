/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcrescen <jcrescen@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 14:19:30 by jcrescen          #+#    #+#             */
/*   Updated: 2022/10/22 14:19:30 by jcrescen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/ft_printf.h"

int	ft_lfsp_str(char *str, va_list args)
{
	int	i;
	int	len;

	i = 0;
	len = 0;
	if (str[i + 1] == 'c')
		len += ft_sp_c(va_arg(args, int));
	else if (str[i] == 's')
		len += ft_sp_s(va_arg(args, char *));
	else if (str[i] == 'p')
		len += ft_sp_p(va_arg(args, unsigned long long));
	else if (str[i] == 'd' || str[i] == 'i')
		len += ft_sp_id(va_arg(args, int));
	else if (str[i] == 'u')
		len += ft_sp_u(va_arg(args, unsigned int));
	else if (str[i] == 'x' || str[i] == 'X')
		len += ft_sp_x(str[i], va_arg(args, unsigned int));
	else if (str[i] == '%')
		len += write(1, "%", 1);
	return (len);
}

int	ft_printf(const char *str, ...)
{
	int		i;
	int		len;
	va_list	args;

	i = 0;
	len = 0;
	va_start(args, str);
	while (str[i])
	{
		if (str[i++] == '%')
			len += ft_lfsp_str(str[i], args);
		else
		{
			len += write(1, str, 1);
			i++;
		}
	}
	va_end(args);
	return (len);
}  
