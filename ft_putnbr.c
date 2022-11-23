/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-kace <ael-kace@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 18:18:51 by ael-kace          #+#    #+#             */
/*   Updated: 2022/11/21 16:07:37 by ael-kace         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(int nbr)
{
	int		i;

	i = 0;
	if (nbr == -2147483648)
	{
		i += write(1, "-2", 2);
		i += ft_putnbr(147483648);
	}
	else if (nbr < 0)
	{
		i += ft_putchar('-');
		nbr *= -1;
		i += ft_putnbr(nbr);
	}
	else if (nbr > 9)
	{
		i += ft_putnbr(nbr / 10);
		i += ft_putnbr(nbr % 10);
	}
	else
		i += ft_putchar(nbr + '0');
	return (i);
}
