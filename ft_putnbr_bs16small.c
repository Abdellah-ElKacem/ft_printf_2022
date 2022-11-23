/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_bs16small.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-kace <ael-kace@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 19:54:29 by ael-kace          #+#    #+#             */
/*   Updated: 2022/11/21 16:12:48 by ael-kace         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_bs16small(unsigned long nbr)
{
	int	i;

	i = 1;
	if (nbr > 15)
	{
		ft_putnbr_bs16small(nbr / 16);
		ft_putnbr_bs16small(nbr % 16);
	}
	else
		ft_putchar(SMALL[nbr]);
	return (ft_count_nbr_bs16(nbr));
}
