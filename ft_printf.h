/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waon-in <waon-in@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 06:36:42 by waon-in           #+#    #+#             */
/*   Updated: 2024/01/15 07:27:44 by waon-in          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>

//MAIN
int		ft_printf(const char *s, ...);
int		ft_putchar(char c);
int		ft_putstr(char *str);
int		ft_check(va_list *args, char c);

//UTILS
int		ft_putnbr(long nb);
int		ft_putnbr_u(unsigned int nb);
int		ft_putnbr_x(unsigned long nb);
int		ft_putnbr_xb(unsigned int nb);
int		ft_putnbr_p(unsigned long nb);

#endif
