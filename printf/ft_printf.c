/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bantunes <bantunes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 14:08:12 by bantunes          #+#    #+#             */
/*   Updated: 2022/02/23 14:25:25 by bantunes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *pillar, ...)
{
	int		i;
	va_list	stone;

	va_start(stone, pillar);
	i = process(pillar, stone);
	va_end(stone);
	return (i);
}
/*
int main()
{
    
    char    *a = "banana";
    int     b = 1000;
    unsigned int    d = 1000000000;
    int arr;
    int att;

    arr = ft_printf("hello %x\n", d);
    printf("%d\n", arr);
    att = printf("hello %x\n", d);
    printf("%d\n", att);
   
    printf("(%d)\n", ft_putnbr_fd(-100000, 1));
}
 */