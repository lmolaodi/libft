/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmolaodi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 14:25:18 by lmolaodi          #+#    #+#             */
/*   Updated: 2019/05/21 15:04:42 by lmolaodi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memcpy(void *restrict dst, const void *restrict src, size_t n)
{
	int		i;
	char	*dest;
	char	*src;

	dest = (char *)dst;
	src = (char *)src;
	while (i < n)
	{
		dst[i] = src[i];
		i++;
	}
	return (dst);
}
