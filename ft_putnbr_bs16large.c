/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_bs16large.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-kace <ael-kace@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 19:57:25 by ael-kace          #+#    #+#             */
/*   Updated: 2022/11/21 16:11:52 by ael-kace         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_bs16large(unsigned long nbr)
{
	int	i;

	i = 1;
	if (nbr > 15)
	{
		ft_putnbr_bs16large(nbr / 16);
		ft_putnbr_bs16large(nbr % 16);
	}
	else
		ft_putchar(LARGE[nbr]);
	return (ft_count_nbr_bs16(nbr));
}
