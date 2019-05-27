/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmolaodi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/23 13:14:13 by lmolaodi          #+#    #+#             */
/*   Updated: 2019/05/27 14:36:07 by lmolaodi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char *dest;
	char *source;
	size_t i;

	i = 0;
	dest = (char *)dst;
	source = (char *)src;

	if (dest[i] < source[i])
	{
		while (i < len)
		{
			dest[i] = source[i];
			i++;
		}
	}
	else
	{
		i = len - 1;
		while (i >= 0)
		{
			dest[i] = source[i];
			i--;
		}
	}
	return (dst);
}
