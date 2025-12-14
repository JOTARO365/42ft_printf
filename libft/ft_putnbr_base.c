/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wiaon-in <wiaon-in@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/28 08:56:57 by wiaon-in          #+#    #+#             */
/*   Updated: 2025/12/05 18:53:51 by wiaon-in         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_base(int nb, char *base)
{
	long long		nbr;
	size_t			len_base;

	nbr = nb;
	len_base = ft_strlen(base);
	if (nbr < 0)
	{
		ft_putchar_fd('-', 1);
		nbr -= nbr;
	}
	if ((size_t)nbr >= len_base)
		ft_putnbr_base(nbr / len_base, base);
	ft_putchar_fd((base[nbr % len_base]), 1);
}
