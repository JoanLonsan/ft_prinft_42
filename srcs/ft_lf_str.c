/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lf_str.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 15:18:12 by marvin            #+#    #+#             */
/*   Updated: 2022/10/05 15:18:12 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/*  En esta función entra la posición str + 1, siendo str el %. Por lo que entra el siguiente car. del activador, pudiendo ser:
    Una flag, el width, o el especificador.
    %[flags][width]specifier
    Casos a tener en cuenta:
    %c > un único char.
    %s > una string.
    %p > un puntero en hformato hexadecimal.
    %i / %d > un numero en base decimal (10).
    %u > un unsigned decimal.
    %x > un numero en hexadecimal (base 16) en minúsculas.
    %X > un numero en hexadecimal (b16) en mayúsculas.
    %% > un signo porcentual ("%").

    > Adicionalmente, considerar las siguientes flags y el "Width"
    "-" > Justificación a izda. con un ancho determinado, o just. dcha (default).
    "0" > Llenar espacios con "0"s en vez de con espacios.
    "+" > obliga a poner el símbolo "+".
    " " > si no hay signo, coloca un " " antes del valor.
    "#" > (para x y X) En hexadecimal hace: obliga a poner un 0 delante de los números con sólo 2 valores.
    Width > número mínimo de carácteres a escribir. (p.ej. "%5s", Barcelona > Barcelona: Hola > "     ")                    */


int ft_lfsp_str(t_printf *tab)
{
    while (str[i])
        if (str == '-')
            i += ft_flag_minus(tab, str);
        else if (str == '0')
            i += ft_flag_zero(tab, str);
        else if (str == '+')
            i += ft_flag_plus(tab, str);
        else if (str == '#')
            i += ft_flag_hashtag(tab, str);
        else if (str == ' ')
            i += ft_flag_space(tab, str);
        else if (str >= '0' && str <= '9')
            i += ft_width(tab, str);
        else if (str == 'c')
            i += ft_sp_c(tab, str);
        else if (str == 's')
            i += ft_sp_s(tab, str)
        else if (str == 'p')
            i += ft_sp_p(tab, str);
        else if (str == 'i' || str == 'd')
            i += ft_sp_i_or_d(tab, str);
        else if (str == 'x' || str == 'X')
            i += ft_sp_x_or_X(tab, str);
        else if (str == '%')
            i += ft_sp_perc(tab, str);
        
    return (i);
}
