/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmolaodi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/25 11:39:20 by lmolaodi          #+#    #+#             */
/*   Updated: 2019/05/25 13:04:13 by lmolaodi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t i;
	char *dest;
	char *surc;

	i = 0;
	dest = (char *)dst;
	surc = (char *)src;

	while (i < n)
	{
		dest[i] = surc[i];
		if (surc[i] == (char)c)
			return ((unsigned char *)dst + i + 1);
		i++;
	}
	return (NULL);
}
