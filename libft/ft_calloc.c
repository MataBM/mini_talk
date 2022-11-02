/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bantunes <bantunes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 14:25:16 by bantunes          #+#    #+#             */
/*   Updated: 2022/01/28 16:12:42 by bantunes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	size_t			s;
	char			*ptr;
	size_t			i;

	s = count * size;
	i = 0;
	ptr = malloc(s);
	if (ptr == NULL)
		return (NULL);
	while (i < s)
	{
		ptr[i] = 0;
		i++;
	}
	return (ptr);
}
