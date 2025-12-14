/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wiaon-in <wiaon-in@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/14 16:59:09 by wiaon-in          #+#    #+#             */
/*   Updated: 2025/12/14 18:32:43 by wiaon-in         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstr(char *str)
{
	size_t	len;

	if (str == NULL)
	{
		write(1, "(null)", 6);
		return (6);
	}
	len = ft_strlen(str);
	write(1, str, len);
	return ((int)len);
}

int	ft_putchar(char c)
{
	write(1, &c, 1);
	return (1);
}

int	ft_putpointer(unsigned long long p)
{
	int	len;

	len = 0;
	if (p == 0)
		len += ft_putstr("(nil)");
	else
	{
		len = ft_putstr("0x");
		len += ft_putptr_base_len(p, "0123456789abcdef");
	}
	return (len);
}

int	ft_putnbr_base_len(long long nbr, char *base)
{
	int	len_base;
	int	count;

	count = 0;
	len_base = ft_strlen(base);
	if (nbr < 0)
	{
		count += ft_putchar('-');
		nbr = -nbr;
	}
	if (nbr >= len_base)
		count += ft_putnbr_base_len(nbr / len_base, base);
	count += ft_putchar(base[nbr % len_base]);
	return (count);
}

int	ft_putptr_base_len(unsigned long long nbr, char *base)
{
	int	len_base;
	int	count;

	count = 0;
	len_base = ft_strlen(base);
	if (nbr >= (unsigned long long)len_base)
		count += ft_putptr_base_len(nbr / len_base, base);
	count += ft_putchar(base[nbr % len_base]);
	return (count);
}
