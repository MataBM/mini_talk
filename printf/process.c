/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   process.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bantunes <bantunes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 11:51:13 by bantunes          #+#    #+#             */
/*   Updated: 2022/02/23 14:38:59 by bantunes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	hexalink(unsigned long stone, int i)
{
	char	hexa[100];
	int		temp;
	int		y;

	while (stone != 0)
	{
		temp = stone % 16;
		if (temp < 10)
			hexa[i++] = temp + 48;
		else
			hexa[i++] = temp + 87;
		stone = stone / 16;
	}
	y = i - 1;
	ft_putstr_fc("0x", 1);
	i += 2;
	while (y >= 0)
		ft_putchar_fc(hexa[y--], 1);
	if (i == 2)
	{
		ft_putchar_fc('0', 1);
		return (3);
	}
	return (i);
}

int	ft_putu(unsigned int n, int fd)
{
	if (n == 0)
		return (ft_putchar_fc('0', 1));
	if (n / 10 > 0)
		return (ft_putnbr_fc(n / 10, fd)
			+ ft_putchar_fc((n % 10) + '0', fd));
	else
		return (ft_putchar_fc((n % 10) + '0', fd));
	return (0);
}

int	identify(const char pillar, va_list stone)
{
	int	i;

	i = 0;
	if (pillar == 'c')
		i += ft_putchar_fc(va_arg(stone, int), 1);
	else if (pillar == 's')
		i += ft_putstr_fc(va_arg(stone, char *), 1);
	else if (pillar == 'p')
		i += hexalink(va_arg(stone, unsigned long), i);
	else if (pillar == 'd')
		i += ft_putnbr_fc(va_arg(stone, int), 1);
	else if (pillar == 'i')
		i += ft_putnbr_fc(va_arg(stone, int), 1);
	else if (pillar == 'u')
		i += ft_putu(va_arg(stone, unsigned int), 1);
	else if (pillar == 'x')
		i += ft_putnbr_base(va_arg(stone, unsigned int),
				"0123456789abcdef", 16);
	else if (pillar == 'X')
		i += ft_putnbr_base(va_arg(stone, unsigned int),
				"0123456789ABCDEF", 16);
	else if (pillar == '%')
		i += ft_putchar_fc('%', 1);
	return (i);
}

int	process(const char *pillar, va_list stone)
{
	int	i;
	int	a;

	i = 0;
	a = 0;
	while (pillar[i] != '\0')
	{
		if (pillar[i] != '%')
		{
			ft_putchar_fc(pillar[i], 1);
			a++;
		}
		else if (pillar[i] == '%')
		{
			a += identify(pillar[i++ + 1], stone);
		}
		i++;
	}
	return (a);
}
