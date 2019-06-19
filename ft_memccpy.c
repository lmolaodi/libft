/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmolaodi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/25 11:39:20 by lmolaodi          #+#    #+#             */
/*   Updated: 2019/06/19 09:30:21 by lmolaodi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t	i;
	char	*dest;
	char	*surc;

	i = 0;
	dest = (char *)dst;
	surc = (char *)src;
	while (i < n)
	{
		dest[i] = surc[i];
		if ((unsigned char)surc[i] == (unsigned char)c)
			return (&dst[i + 1]);
		i++;
	}
	return (NULL);
}
