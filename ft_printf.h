/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wiaon-in <wiaon-in@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/28 10:28:53 by wiaon-in          #+#    #+#             */
/*   Updated: 2025/12/14 18:14:02 by wiaon-in         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "libft/libft.h"
# include <stdarg.h>
# include <unistd.h>
# include <limits.h>

int			ft_printf(const char *s, ...);
int			ft_check(va_list *args, char c);
int			ft_putchar(char c);
int			ft_putstr(char *str);
int			ft_putnbr_base_len(long long nbr, char *base);
int			ft_putptr_base_len(unsigned long long nbr, char *base);
int			ft_putpointer(unsigned long long p);

#endif