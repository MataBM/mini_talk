/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bantunes <bantunes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 14:42:58 by bantunes          #+#    #+#             */
/*   Updated: 2022/02/23 14:39:15 by bantunes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_base(int nbr, char *base, int nbase)
{
	int	counter;

	counter = 0;
	if (nbr < 0)
	{
		nbr = nbr * -1;
		counter += ft_putchar_fc('-', 1);
	}
	if (nbr >= nbase)
	{
		counter += ft_putnbr_base(nbr / nbase, base, nbase);
	}
	counter += ft_putchar_fc(base[nbr % nbase], 1);
	return (counter);
}
