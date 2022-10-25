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

int	ft_lfsp_str(char *str, int len, va_list args)
{
	while (str)
	{
		if (*str == 'c')
			len += ft_sp_c(va_arg(args, char *));
		else if (*str == 's')
			len += ft_sp_s(va_arg(args, char *));
		else if (*str == 'p')
			len += ft_sp_p(va_arg(args, size_t));
		else if (*str == 'd' || *str == 'i')
			len += ft_sp_i_or_d(va_arg(args, int));
		else if (*str == 'u')
			len += ft_sp_u(va_arg(args, int));
		else if (*str == 'x' || *str == 'X')
			len += ft_sp_x(*str, va_arg(args, unsigned int));
		else if (*str == '%')
			len += write(1, "%", 1);
	}
	return (len);
}

int	ft_str_printf(char *str, int len, va_list args)
{
	while (*str)
	{
		if (*str == '%')
			ft_lfsp_str(++str, len, args);
		else
			len += write(1, str, 1);
			++str;
	}
	return (len);
}

int	ft_printf(const char *pstr, ...)
{
	char	*str;
	int		len;
	va_list	args;

	str = ft_calloc(sizeof(char), ft_strlen(pstr));
	while (*pstr)
	{
		*str++ = *pstr++;
	}
	va_start(args, pstr);
	len = 0;
	ft_str_printf(str, len, args);
	va_end(args);
	free (str);
	return (len);
}  

int	main()
{
	ft_printf("Vamos a probar: %d, %s", 42, "cadena");
	return(0);
}