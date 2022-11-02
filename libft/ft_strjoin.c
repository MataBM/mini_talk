/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bantunes <bantunes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 14:28:59 by bantunes          #+#    #+#             */
/*   Updated: 2021/12/13 14:31:37 by bantunes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*dst;
	int		i;

	if (!s1 || !s2)
		return (NULL);
	dst = (char *)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	i = 0;
	if (dst != NULL)
	{
		while (s1[i] != '\0')
		{
			dst[i] = s1[i];
			i++;
		}
		while (*s2 != '\0')
		{
			dst[i] = *s2++;
			i++;
		}
		dst[i] = '\0';
		return (dst);
	}
	return (NULL);
}
