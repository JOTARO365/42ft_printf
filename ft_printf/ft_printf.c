/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wiaon-in <wiaon-in@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/28 10:28:34 by wiaon-in          #+#    #+#             */
/*   Updated: 2025/12/05 21:45:51 by wiaon-in         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	putchar_print(char c)
{
	ft_putchar_fd(c, 1);
	return (1);
}

int	putstr_print(char *str)
{
	ft_putstr_fd(&str, 1);
	return (1);
}

int	len_base(int nb, int len_base)
{
	long long	nbr;
	int			len;
	
	nbr = nb;
	len = 0;
	if (nbr < 0)
	{
		nbr = -nbr;
		len++;
	}
	if (nbr == 0)
		return (1);
	if (nbr > 0)
	{
		nbr /= len_base;
		len++;
	}
	return (len);
}


int	putbase_d_print(int nb ,char *base)
{
	int		len;

	len = len_base(nb, ft_strlen(base));
	ft_putnbr_base(nb, base);
	return (len);

}

int	handle_conv(char c, va_list args)
{
	if (c == 'c')
		return (putchar_print((char)va_arg(args, int)));
	else if (c == 's')
		return (putstr_print(va_arg(args, char *)));
	else if (c == 'd' || c == 'i')
		return (putbase_d_print((char)va_arg(args, int), "0123456789"));
	else if (c == '%')
		return (putchar_print('%'));
	return (0);
}

int ft_printf(const char *fmt, ...)
{
    va_list args;
    int 	i;
    int 	total;

	i = 0;
	total = 0;
    va_start(args, fmt);
    while (fmt[i])
    {
        if (fmt[i] == '%')
        {
            if (fmt[i + 1])
            {
                total += handle_conv(fmt[i + 1], args);
				i += 2 ;
				continue ;
            }
            break;
        }
        total += putchar_print(fmt[i]);
        i++;
    }
    va_end(args);
    return total;
}
