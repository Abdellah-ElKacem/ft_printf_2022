/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-kace <ael-kace@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 17:13:53 by ael-kace          #+#    #+#             */
/*   Updated: 2022/11/20 22:40:40 by ael-kace         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# define LARGE "0123456789ABCDEF"
# define SMALL "0123456789abcdef"

# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>
# include <stddef.h>
# include <stdio.h>

size_t	ft_count_nbr_bs16(unsigned long nbr);
int		ft_printf(const char *str, ...);
int		ft_putchar(char c);
int		ft_putnbr_bs16large(unsigned long nbr);
int		ft_putnbr_bs16small(unsigned long nbr);
int		ft_putnbr(int nbr);
int		ft_putnbru(unsigned int nbr);
int		ft_putstr(char *s);
size_t	ft_strlen(const char *s);

#endif