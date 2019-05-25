/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmolaodi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/25 12:25:32 by lmolaodi          #+#    #+#             */
/*   Updated: 2019/05/25 13:05:33 by lmolaodi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t i;
	char *str;
	char *str2;

	str = (char *)s1;
	str2 = (char *)s2;
	i = 0;

	while (i < n)
	{
		if (str[i] != str2[i])
			return ((unsigned char)str[i] - (unsigned char)str2[i]);
		i++;
	}
	if (i < n && (str[i] == '\0' && str2[i] != '\0'))
		return ((unsigned char)str[i] - (unsigned char)str2[i]);
	else if (str2[i] == '\0' && str[i] != '\0')
		return ((unsigned char)str[i] - (unsigned char)str2[i]);
	return (0);
}
