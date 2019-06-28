/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmolaodi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/25 12:25:32 by lmolaodi          #+#    #+#             */
/*   Updated: 2019/06/28 10:41:30 by lmolaodi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	char	*str;
	char	*str2;
	size_t	i;

	str = (char *)s1;
	str2 = (char *)s2;
	i = 0;
	if (str == str2 || !n)
		return (0);
	if (i < n - 1)
	{
		while (str[i] == str2[i] && i < n - 1)
			i++;
	}
	return ((unsigned char)str[i] - (unsigned char)str2[i]);
}
