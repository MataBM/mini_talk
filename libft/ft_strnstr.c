/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bantunes <bantunes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 14:29:35 by bantunes          #+#    #+#             */
/*   Updated: 2021/12/13 14:31:12 by bantunes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	char	*a;
	size_t	n;
	size_t	i;
	size_t	j;

	a = (char *)haystack;
	n = ft_strlen(needle);
	if (!(n))
		return (a);
	if (ft_strlen(haystack) < n || len < n)
		return (NULL);
	i = 0;
	while (a[i] && i <= len - n)
	{
		j = 0;
		while (needle[j] && needle[j] == a[i + j])
			j++;
		if (j == n)
			return (&a[i]);
		i++;
	}
	return (NULL);
}
