/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bantunes <bantunes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 14:29:30 by bantunes          #+#    #+#             */
/*   Updated: 2021/12/13 14:31:14 by bantunes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned char	*a1;
	unsigned char	*a2;

	a1 = (unsigned char *)s1;
	a2 = (unsigned char *)s2;
	if (n == 0 || a1 == a2)
		return (0);
	while (n)
	{
		if (*a1 != *a2 || *a1 == '\0' || *a2 == '\0')
			return (*a1 - *a2);
		a1++;
		a2++;
		n--;
	}
	return (0);
}
