/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bantunes <bantunes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 14:36:48 by bantunes          #+#    #+#             */
/*   Updated: 2022/09/20 12:23:32 by bantunes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdio.h>
# include <stdlib.h>
# include <stdarg.h>
# include <unistd.h>

int		ft_printf(const char *pillar, ...);

int		process(const char *pillar, va_list stone);

int		ft_putchar_fc(char c, int fd);

int		ft_putstr_fc(char *s, int fd);

int		ft_putnbr_fc(int n, int fd);

int		ft_putnbr_base(int nbr, char *base, int nbase);

#endif
