/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmolaodi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 14:25:18 by lmolaodi          #+#    #+#             */
/*   Updated: 2019/06/19 09:50:46 by lmolaodi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;
	char	*dest;
	char	*surc;

	i = 0;
	dest = (char *)dst;
	surc = (char *)src;
	if (!n || dst == src)
		return (dst);
	while (i < n)
	{
		dest[i] = surc[i];
		i++;
	}
	return (dst);
}
