/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-kace <ael-kace@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 17:15:29 by ael-kace          #+#    #+#             */
/*   Updated: 2022/11/22 23:16:13 by ael-kace         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	list_arg(va_list arg, char w)
{
	int	i;

	i = 0;
	if (w == 'c')
		i += ft_putchar(va_arg(arg, int));
	else if (w == 's')
		i += ft_putstr(va_arg(arg, char *));
	else if (w == 'd' || w == 'i')
		i += ft_putnbr(va_arg(arg, int));
	else if (w == 'u')
		i += ft_putnbru(va_arg(arg, unsigned int));
	else if (w == 'x')
		i += ft_putnbr_bs16small(va_arg(arg, unsigned int));
	else if (w == 'X')
		i += ft_putnbr_bs16large(va_arg(arg, unsigned int));
	else if (w == 'p')
	{
		i += ft_putstr("0x");
		i += ft_putnbr_bs16small(va_arg(arg, unsigned long));
	}
	else if (w == '%')
		i += ft_putchar('%');
	return (i);
}

int	ft_printf(const char *str, ...)
{
	va_list	list;
	int		i;
	int		k;

	i = 0;
	k = 0;
	va_start (list, str);
	while (str[i] != 0)
	{
		if (str [i] == '%')
		{
			if (str[i + 1] == '\0')
				break ;
			k += list_arg (list, str[i + 1]);
			i++;
		}
		else
		{
			k += ft_putchar(str[i]);
		}
		i++;
	}
	va_end(list);
	return (k);
}
