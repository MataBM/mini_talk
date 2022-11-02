/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bantunes <bantunes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 14:27:44 by bantunes          #+#    #+#             */
/*   Updated: 2021/12/13 14:31:58 by bantunes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *restrict dst, const void *restrict src, size_t n)
{
	char		*a;
	const char	*b;

	a = (char *)dst;
	b = (char *)src;
	if (!dst && !src)
		return (NULL);
	while (n-- > 0)
	{
		*a++ = *b++;
	}
	return (dst);
}
