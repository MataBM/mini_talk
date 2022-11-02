/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bantunes <bantunes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 15:09:43 by bantunes          #+#    #+#             */
/*   Updated: 2022/02/17 10:49:51 by bantunes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstr_fc(char *s, int fd)
{
	int	i;

	i = 0;
	if (!s)
		return (ft_putstr_fc("(null)", 1));
	while (s[i])
	{
		ft_putchar_fc(s[i], fd);
		i++;
	}
	return (i);
}
