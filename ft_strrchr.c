/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmolaodi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/24 15:05:35 by lmolaodi          #+#    #+#             */
/*   Updated: 2019/05/24 15:48:41 by lmolaodi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*str;

	i = 0;
	while (*s != '\0')
	{
		if (*s == c)
		{
			str = ((char *)s);
			i = 1;
		}
		s++;
	}
	if (i == 1)
		return ((char *)str);
	else
		return (NULL);
}
