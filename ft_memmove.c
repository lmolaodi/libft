/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmolaodi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/23 13:14:13 by lmolaodi          #+#    #+#             */
/*   Updated: 2019/05/24 15:48:37 by lmolaodi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>
#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char *tempvar;

	tempvar = ((char *)malloc(sizeof(*src) * len));
	if (tempvar == '\0')
		return (NULL);
	ft_memcpy(tempvar, src, len);
	ft_memcpy(dst, tempvar, len);
	free(tempvar);
	return (dst);
}
