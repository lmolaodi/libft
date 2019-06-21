/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmolaodi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/18 10:08:40 by lmolaodi          #+#    #+#             */
/*   Updated: 2019/06/21 10:45:20 by lmolaodi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_strsplit(char const *s, char c)
{
	char	**str;
	size_t	i;
	size_t	j;
	size_t	len;

	i = 0;
	j = 0;
	if (!s || !(str = (char **)malloc(sizeof(char *) * (ft_strlen(s) + 1))))
		return (0);
	while (s[i] != '\0')
	{
		if (s[i] == c)
			i++;
		else
		{
			len = 0;
			while (s[len + i] && (s[len + i] != c))
				len++;
			str[j] = ft_strsub(s, i, len);
			i = i + len;
			j++;
		}
	}
	str[j] = 0;
	return (str);
}
