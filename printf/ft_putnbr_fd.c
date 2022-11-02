/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bantunes <bantunes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 14:28:18 by bantunes          #+#    #+#             */
/*   Updated: 2022/02/23 14:39:48 by bantunes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_fc(int n, int fd)
{
	if (n == 0)
		return (ft_putchar_fc('0', 1));
	if (n == -2147483648)
		return (ft_putstr_fc("-2147483648", fd));
	else
	{
		if (n < 0)
		{
			write(1, "-", 1);
			return (ft_putnbr_fc(n * -1, fd) + 1);
		}
		else if (n / 10 > 0)
			return (ft_putnbr_fc(n / 10, fd)
				+ ft_putchar_fc((n % 10) + '0', fd));
		else
			return (ft_putchar_fc((n % 10) + '0', fd));
	}
	return (0);
}
