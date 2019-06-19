/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmolaodi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/31 12:00:56 by lmolaodi          #+#    #+#             */
/*   Updated: 2019/06/19 15:31:43 by lmolaodi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char *newstr;

	newstr = ft_memalloc(size + 1);
	if (newstr)
		ft_bzero(newstr, size + 1);
	return (newstr);
}
